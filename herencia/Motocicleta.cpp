#include "Motocicleta.h"

Motocicleta::Motocicleta(string patente, string marca, int modelo, int km, string tipo) : Vehiculo(patente, marca, modelo, km)
{
	this->tipo = tipo;
}

Motocicleta::~Motocicleta()
{

}

void Motocicleta::mostrar()
{
	cout << "---Motocicleta---" << endl;
	Vehiculo::mostrar();
	cout << "tipo: " << tipo << endl;
}