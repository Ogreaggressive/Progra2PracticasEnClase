#include "SingletonEquipos.h"


SingletonEquipos::SingletonEquipos() : equipos()
{

}

SingletonEquipos::~SingletonEquipos()
{

}

ListaGenerica<Equipo>& SingletonEquipos::getSingletonEquipos()
{
	return equipos;
}

SingletonEquipos& SingletonEquipos::getInst()
{
	static SingletonEquipos instancia;
	return instancia;
}


string SingletonEquipos::toString()
{
	stringstream ss;
	ordenar();
	Nodo<Equipo>* aux = equipos.getPrimer();
	ss << "{equipos:[";
	for (int i = 0; i < equipos.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		if (i != equipos.getTam() - 1)
		{
			aux = aux->getSiguiente();
		}
		if (i != equipos.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void SingletonEquipos::registrar(string nombre)
{
	Equipo* equipo = new Equipo(nombre);
	equipos.registrar(equipo);
}


void SingletonEquipos::ordenar()
{
	equipos.ordenar(Equipo::compNomAsc);
}

Equipo* SingletonEquipos::buscar(string nombre)
{
	Equipo* p1 = new Equipo(nombre);
	if (equipos.buscar(p1) == NULL)
	{
		throw ExceptionEquipoInexistente(nombre);
	}
	return equipos.buscar(p1);
}
