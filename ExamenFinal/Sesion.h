#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

#include "SingletonSocios.h"


class Sesion
{
private:
	int fecha;
	ListaGenerica<Socio> asistentes;
public:
	Sesion(int fecha);
	~Sesion();
	int getfecha();
	void mostrar();
	static void mostrar(Sesion* Sesion);
	bool operator==(Sesion* Sesion);
	static bool compfechaAsc(Sesion* p1, Sesion* p2);
	string toString();
	void registrar(int ci);
};







