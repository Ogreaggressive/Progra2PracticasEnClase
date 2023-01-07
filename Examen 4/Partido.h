#pragma once

#include "Equipo.h"
#include "Evento.h"
#include "Gol.h"

class Partido
{
private:
	int id;
	Equipo* p1;
	Equipo* p2;
	ListaGenerica<Evento> eventos;
public:
	Partido(int id,Equipo* p1, Equipo* p2);
	Partido(int id);
	~Partido();
	int getId();
	void mostrar();
	static void mostrar(Partido* Partido);
	bool operator==(Partido* Partido);
	static bool compIdAsc(Partido* p1, Partido* p2);
	string toString();
	void ordenar();
	void gol(int minuto, string equipo, int ci);
};

