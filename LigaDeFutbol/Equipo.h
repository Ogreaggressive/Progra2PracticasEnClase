#pragma once

#include "Jugador.h"

#define CANT_MAX_JUGADORES 25
class Equipo
{
private:
	string nombre;
	Jugador* jugadores[CANT_MAX_JUGADORES];
	int ind;

public:
	Equipo(string nombre);
	~Equipo();
	void registrarJugador(int ci, string nombre, long fono);
	void mostrar();
	void mostrarJugadores();
	//Gets = obtener valores de los atributos
	string getNombre();
	//Sets = 
	void setNombre(string nombre);
};

