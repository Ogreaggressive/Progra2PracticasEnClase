#include "SingletonPartidos.h"


SingletonPartidos::SingletonPartidos() : partidos()
{

}

SingletonPartidos::~SingletonPartidos()
{

}

ListaGenerica<Partido>& SingletonPartidos::getSingletonPartidos()
{
	return partidos;
}

SingletonPartidos& SingletonPartidos::getInst()
{
	static SingletonPartidos instancia;
	return instancia;
}


string SingletonPartidos::toString()
{
	stringstream ss;
	ordenar();
	Nodo<Partido>* aux = partidos.getPrimer();
	ss << "{partidos:[";
	for (int i = 0; i < partidos.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		if (i != partidos.getTam() - 1)
		{
			aux = aux->getSiguiente();
		}
		if (i != partidos.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void SingletonPartidos::registrar(int id, Equipo* p1, Equipo* p2)
{
	Partido* partido = new Partido(id,p1,p2);
	partidos.registrar(partido);
}


void SingletonPartidos::ordenar()
{
	partidos.ordenar(Partido::compIdAsc);
}

Partido* SingletonPartidos::buscar(int id)
{
	Partido* p1 = new Partido(id);
	return partidos.buscar(p1);
}

