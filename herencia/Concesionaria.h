#pragma once

#include "ModVehiculos.h"
#include "ModVentas.h"
#include "ArrayGenerico.h"

class Concesionaria
{
private:
	ModVehiculos* modVehiculos;
	ModVentas* modVentas;
	//ArrayGenerico<Vehiculo> vehiculos;
	//ArrayGenerico<Cliente> clientes;

public:
	Concesionaria(int cantMaxVeh, int cantMaxVentas);
	~Concesionaria();
	ModVehiculos* getModVehiculos();
	ModVentas* getModVentas();

};

