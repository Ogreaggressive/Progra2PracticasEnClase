#include "Equipo.h"

Equipo::Equipo(string nombre)
{
	this->nombre = nombre;
	ind = 0;
}

Equipo::~Equipo()
{
	for (int i = 0; i < ind; i++)
	{
		delete jugadores[i];
	}
}

void Equipo::registrarJugador(int ci, string nombre, long fono)
{
	if (ind < CANT_MAX_JUGADORES)
	{
		jugadores[ind] = new Jugador(ci, nombre, fono);
		ind++;
	}
	else
	{
		cout << "Error, limite de jugadores excedido!" << endl;
	}
}

void Equipo::mostrarJugadores()
{
	for (int i = 0; i < ind; i++)
	{
		jugadores[i]->mostrar();
	}
}

void Equipo::mostrar()
{
	cout << "------Equipo------" << endl;
	cout << "nombre: " << nombre <<endl;
	cout << "cant Jugadores: " << ind << endl;
	mostrarJugadores();
}


string Equipo::getNombre()
{
	return nombre;
}

void Equipo::setNombre(string nombre)
{
	this->nombre = nombre;
}