#pragma once

#include "Partido.h"

#define CANT_MAX_PARTIDOS 10

class ModuloPartidos
{
private:
	Equipo* partidos(CANT_MAX_PARTIDOS);
	int ind;
public:
	ModuloPartidos();
	~ModuloPartidos();
	void registrar(long fecha, Equipo* local,Equipo* visitante);
	void mostrar();
};
