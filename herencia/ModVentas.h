#pragma once

#include "Venta.h"

class ModVentas
{
private:
	Venta** ventas;
	int cantMaxVentas;
	int ind;
public:
	ModVentas(int cantMaxVentas);
	~ModVentas();
	void registrar(string codigoVenta, int monto, Vehiculo* vehiculo, Persona* comprador);
	void mostrar();
	Venta* buscar(string codigoVenta);
	void ordenar();
};









