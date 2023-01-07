#pragma once

#include "Equipo.h"

class Evento
{
protected:
	int minuto;
	string equipo;
public:
	Evento( int minuto, string equipo);
	Evento(int codigo);
	~Evento();
	void mostrar();
	static void mostrar(Evento* Evento);
	bool operator==(Evento* Evento);
	static bool cmpMinuto(Evento* p1, Evento* p2);
	virtual string toString() = 0;
};

