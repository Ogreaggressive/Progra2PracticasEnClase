#include "Campeonato.h"

Campeonato::Campeonato()
{

}

Campeonato::~Campeonato()
{

}

/*
string Campeonato::toString()
{
	stringstream ss;
	ordenar();
	Nodo<Equipo>* aux = equipos.getPrimer();
	ss << "{equipos:[";
	for (int i = 0; i < equipos.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != equipos.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]";
	return ss.str();
}*/

void Campeonato::ordenar()
{
	//equipos.ordenar(Equipo::compNomAsc);
}

SingletonEquipos& Campeonato::getEquipos()
{
	return SingletonEquipos::getInst();
}

SingletonPartidos& Campeonato::getPartidos()
{
	return SingletonPartidos::getInst();
}