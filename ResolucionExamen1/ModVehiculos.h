#pragma once

#include "Vehiculo.h"

class ModVehiculos
{
private:
	Vehiculo** vehiculos;
	int cantMaxVeh;
	int ind;
public:
	ModVehiculos(int cantMaxVeh);
	~ModVehiculos();
	void registrar(string placa, int modelo, string marca);
	Vehiculo* buscar(string placa);
	void mostrar();
};



