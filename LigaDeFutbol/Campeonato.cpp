#include "Campeonato.h"

Campeonato::Campeonato(string nombre)
{
	this->nombre = nombre;
}

Campeonato::~Campeonato()
{
}

ModuloEquipos& Campeonato::getModuloEquipos()
{
	return moduloEquipos;
}

ModuloPartidos& Campeonato::getModuloPartidos()
{
	return moduloPartidos;
}
