#pragma once

#include "Equipo.h"

class Partido
{
private:
	long fecha;
	Equipo* local;
	Equipo* visitante;
public:
	Partido(long fecha,Equipo* local, Equipo* visitante);
	~Partido();
	void mostrar();
};

