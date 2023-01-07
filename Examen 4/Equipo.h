#pragma once

#include "Jugador.h"
#include "ListaGenerica.h"

class Equipo
{
private:
	string nombre;
	ListaGenerica<Jugador> jugadores;
public:
	Equipo(string nombre);
	~Equipo();
	string getNombre();
	void mostrar();
	static void mostrar(Equipo* Equipo);
	bool operator==(Equipo* Equipo);
	static bool compNomAsc(Equipo* p1, Equipo* p2);
	string toString();
	void registrarJugador(int ci, string nombre, int fono);
	void ordenar();
	Jugador* buscarJugador(int ci);
};

