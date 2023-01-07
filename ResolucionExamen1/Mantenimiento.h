#pragma once

#include "Mecanico.h"
#include "Vehiculo.h"


class Mantenimiento
{
private:
	long fecha;
	string detalle;
	Mecanico* mecanico;
	Vehiculo* vehiculo;
public:
	Mantenimiento(long fecha, string detalle, Mecanico* mecanico, Vehiculo* vehiculo);
	~Mantenimiento();
	long getFecha();
	void mostrar();
};

