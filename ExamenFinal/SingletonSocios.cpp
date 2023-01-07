#include "SingletonSocios.h"


SingletonSocios::SingletonSocios() : socios()
{

}

SingletonSocios::~SingletonSocios()
{

}

SingletonSocios& SingletonSocios::getInst()
{
	static SingletonSocios instancia;
	return instancia;
}


string SingletonSocios::toString()
{
	stringstream ss;
	ordenar();
	Nodo<Socio>* aux = socios.getPrimer();
	ss << "{socios:[";
	for (int i = 0; i < socios.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		if (i != socios.getTam() - 1)
		{
			aux = aux->getSiguiente();
		}
		if (i != socios.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void SingletonSocios::registrar(int ci,string nombre)
{
	Socio* socio = new Socio(ci,nombre);
	socios.registrar(socio);
}


void SingletonSocios::ordenar()
{
	socios.ordenar(Socio::compNomAsc);
}

ListaGenerica<Socio>* SingletonSocios::getSocios()
{
	return &socios;
}


Socio* SingletonSocios::buscar(int ci)
{
	Socio* p1 = new Socio(ci);
	return socios.buscar(p1);
}

