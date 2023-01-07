#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;


class Socio
{
private:
	int ci;
	string nombre;
public:
	Socio(int ci, string nombre);
	Socio(int ci);
	~Socio();
	int getCi();
	string getNombre();
	void mostrar();
	static void mostrar(Socio* Socio);
	bool operator==(Socio* Socio);
	static bool compCiAsc(Socio* p1, Socio* p2);
	static bool compNomAsc(Socio* p1, Socio* p2);
	string toString();
};





