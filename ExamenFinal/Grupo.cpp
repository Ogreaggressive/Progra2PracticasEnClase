#include "Grupo.h"

Grupo::Grupo(string id) :socios2(20)
{
	this->id = id;
}


Grupo::~Grupo()
{

}


void Grupo::mostrar()
{
	//cout << "Grupo:" << endl;
	cout << "id:" << id << endl;
	cout << "id:" << id << endl;
}


void Grupo::mostrar(Grupo* Grupo)
{
	Grupo->mostrar();
}

bool Grupo::operator==(Grupo* Grupo)
{
	if (id == Grupo->id)
	{
		return true;
	}
	return false;
}

bool Grupo::cmpId(Grupo* p1, Grupo* p2)
{
	return p1->id > p2->id;
}

string Grupo::toString()
{
	stringstream ss;

	ss << "{id:"<<id;
	ss << ",inscritos:[";
	Nodo<Socio>* aux = socios.getPrimer();
	/*for (int i = 0; i < socios.getTam(); i++)
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
	}*/

	for (int i = 0; i < socios2.getTam(); i++)
	{
		ss << socios2[i]->toString();
		if (i != socios2.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

string Grupo::toStringEnSubclases()
{
	stringstream ss;

	ss << "{id:" << id;
	ss << ",inscritos:[";
	Nodo<Socio>* aux = socios.getPrimer();

	/*for (int i = 0; i < socios.getTam(); i++)
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
	*/
	for (int i = 0; i < socios2.getTam(); i++)
	{
		ss << socios2[i]->toString();
		if (i != socios2.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]";
	return ss.str();
}

void Grupo::inscribir(int ci)
{
	//socios.registrar(SingletonSocios::getInst().buscar(ci));
	socios2.registrar(SingletonSocios::getInst().buscar(ci));
}


