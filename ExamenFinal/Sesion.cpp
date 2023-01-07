#include "Sesion.h"

Sesion::Sesion(int fecha)
{
	this->fecha = fecha;
}


Sesion::~Sesion()
{

}

int Sesion::getfecha()
{
	return fecha;
}



void Sesion::mostrar()
{
	//cout << "Sesion:" << endl;
}


void Sesion::mostrar(Sesion* Sesion)
{
	Sesion->mostrar();
}

bool Sesion::operator==(Sesion* Sesion)
{
	if (fecha == Sesion->fecha)
	{
		return true;
	}
	return false;
}

bool Sesion::compfechaAsc(Sesion* p1, Sesion* p2)
{
	return p1->fecha > p2->fecha;
}


string Sesion::toString()
{
	stringstream ss;
	ss << "{fecha:" << fecha;
	ss << ",asistentes:[";
	Nodo<Socio>* aux = asistentes.getPrimer();

	for (int i = 0; i < asistentes.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		if (i != asistentes.getTam() - 1)
		{
			aux = aux->getSiguiente();
		}
		if (i != asistentes.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void Sesion::registrar(int ci)
{
	asistentes.registrar(SingletonSocios::getInst().buscar(ci));
}
