#pragma once

#include "Mantenimiento.h"

class ModMantenimientos
{
private:
	Mantenimiento** mantenimientos;
	int cantMaxMan;
	int ind;
public:
	ModMantenimientos(int cantMaxMan);
	~ModMantenimientos();
	void registrar(long fecha, string detalle, Mecanico* mecanico, Vehiculo* vehiculo);
	void mostrar();
};





