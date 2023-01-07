#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;


class Persona
{
private:
	int ci;
	string nombre;
public:
	Persona(int ci, string nombre);
	Persona(string nombre);
	~Persona();
	int getCi();
	string getNombre();
	void mostrar();
	static void mostrar(Persona* persona);
	bool operator==(Persona* persona);
	static bool compCiAsc(Persona* p1, Persona* p2);
	static bool compNomAsc(Persona* p1, Persona* p2);
	string toString();
};



