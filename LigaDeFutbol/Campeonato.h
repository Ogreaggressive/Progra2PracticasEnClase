#pragma once

#include "ModuloEquipos.h"
#include "modPartidos.h"

class Campeonato
{
private:
	string nombre;
	ModuloEquipos moduloEquipos;
	ModuloPartidos moduloPartidos;
public:
	Campeonato(string nombre);
	~Campeonato();
	ModuloEquipos& getModuloEquipos();
	ModuloPartidos& getModuloPartidos();
};

