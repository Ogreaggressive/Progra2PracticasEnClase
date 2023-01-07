#include "Jugador.h"

Jugador::Jugador()
{
	cout << "construyendo Jugador" << endl;
}

Jugador::Jugador(int ci, string nombre, long fono)
{
	cout << "construyendo Jugador" << endl;
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
}

Jugador::~Jugador()
{
	cout << "destruyendo Jugador" << endl;
}

void Jugador::mostrar()
{
	cout << "-----Jugador-------" << endl;
	cout << "ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
	cout << "telefono: " << fono << endl;
}