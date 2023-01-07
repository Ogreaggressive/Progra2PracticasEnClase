#pragma once

#include "Vehiculo.h"
#include "Persona.h"

class Venta
{
private:
	string codigoVenta;
	int monto;
	Vehiculo* vehiculo;
	Persona* comprador;
public:
	Venta(string codigoVenta, int monto, Vehiculo* vehiculo, Persona* comprador);
	~Venta();
	void mostrar();
	string getCodigoVenta();
	string getPatente();
	
};

