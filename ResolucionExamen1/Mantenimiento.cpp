#include "Mantenimiento.h"

Mantenimiento::Mantenimiento(long fecha, string detalle, Mecanico* mecanico, Vehiculo* vehiculo)
{
	this->fecha = fecha;
	this->detalle = detalle;
	this->mecanico = mecanico;
	this->vehiculo = vehiculo;
}

Mantenimiento::~Mantenimiento()
{

}

long Mantenimiento::getFecha()
{
	return fecha;
}

void Mantenimiento::mostrar()
{
	cout << "Mantenimiento" << endl;
	cout << "fecha: " << fecha <<endl;
	cout << "detalle: " << detalle <<endl;
	mecanico->mostrar();
	vehiculo->mostrar();

}