#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;


class Jugador
{
private:
	int ci;
	string nombre;
	int fono;
public:
	Jugador(int ci, string nombre, int fono);
	Jugador(int ci);
	~Jugador();
	int getCi();
	string getNombre();
	void mostrar();
	static void mostrar(Jugador* Jugador);
	bool operator==(Jugador* Jugador);
	static bool compCiAsc(Jugador* p1, Jugador* p2);
	static bool compNomAsc(Jugador* p1, Jugador* p2);
	string toString();
	string getNombreSS();
};





