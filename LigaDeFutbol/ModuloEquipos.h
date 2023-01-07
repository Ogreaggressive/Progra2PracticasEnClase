#pragma once

#include "Equipo.h"

#define CANT_MAX_EQUIPOS 10

class ModuloEquipos
{
private:
	Equipo* equipos[CANT_MAX_EQUIPOS];
	int ind;
public:
	ModuloEquipos();
	~ModuloEquipos();
	void registrar(string nombre);
	void mostrar();
	Equipo* buscar(string nombre);
};

