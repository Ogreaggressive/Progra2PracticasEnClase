#include "Taller.h"

Taller::Taller(string nombre)
{
	this->nombre = nombre;
	indMecanicos = 0;
	indVehiculos = 0;
}
Taller::~Taller()
{

}

void Taller::agregarMecanico(int ci, string nombre)
{
	if (indMecanicos < CANT_MAXIMA_MECANICOS)
	{
		listaMecanicos[indMecanicos] = new Mecanico(ci, nombre);
		indMecanicos++;
	}
}

void Taller::agregarVehiculo(int placa, int propietarioCI)
{
	if (indMecanicos < CANT_MAXIMA_VEHICULOS)
	{
		listaVehiculos[indVehiculos] = new Vehiculo(placa, propietarioCI);
		indVehiculos++;
	}
}

void Taller::mostrar()
{
	cout << nombre << endl;
	for (int i = 0; i < indMecanicos; i++)
	{
		listaMecanicos[i]->mostrar();
	}
	for (int i = 0; i < indVehiculos; i++)
	{
		listaVehiculos[i]->mostrar();
	}
}

