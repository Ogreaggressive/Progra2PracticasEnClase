#include "Concesionaria.h"


Concesionaria::Concesionaria(int cantMaxVeh, int cantMaxVentas)
{
	modVehiculos = new ModVehiculos(cantMaxVeh);
	modVentas = new ModVentas(cantMaxVentas);
}

Concesionaria::~Concesionaria()
{
}


ModVehiculos* Concesionaria::getModVehiculos()
{
	return modVehiculos;
}

ModVentas* Concesionaria::getModVentas()
{
	return modVentas;
}
