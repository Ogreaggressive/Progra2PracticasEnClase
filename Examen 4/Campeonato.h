#pragma once

#include "ListaGenerica.h"

#include "SingletonEquipos.h"
#include "SingletonPartidos.h"
#include "Equipo.h"

class Campeonato
{
private:
	//ListaGenerica<Equipo> equipos;
public:
	Campeonato();
	~Campeonato();
	SingletonEquipos& getEquipos();
	SingletonPartidos& getPartidos();
	string toString();
	void ordenar();
};



