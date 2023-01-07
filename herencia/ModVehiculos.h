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
	void registrar(string patente, string marca, int modelo, int km);
	void aumentar(Vehiculo* vehiculo);
	void mostrar();
	Vehiculo* buscar(string patente);
	void quitarStock(string patente);
	void ordenarVehiculoAsignado();
};







