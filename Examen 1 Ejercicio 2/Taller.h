#pragma once

#include "Vehiculo.h"
#include "Mecanico.h"

#define CANT_MAXIMA_MECANICOS 10
#define CANT_MAXIMA_VEHICULOS 20

class Taller
{
private:
	string nombre;
	Mecanico* listaMecanicos[CANT_MAXIMA_MECANICOS];
	Vehiculo* listaVehiculos[CANT_MAXIMA_VEHICULOS];
	int indMecanicos;
	int indVehiculos;

public:
	Taller(string nombre);
	~Taller();
	void agregarMecanico(int ci, string nombre);
	void agregarVehiculo(int placa, int propietarioCI);
	void mostrar();

};


