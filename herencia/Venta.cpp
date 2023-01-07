#include "Venta.h"

Venta::Venta(string codigoVenta, int monto, Vehiculo* vehiculo, Persona* comprador)
{
	this->codigoVenta = codigoVenta;
	this->monto = monto;
	this->vehiculo = vehiculo;
	this->comprador = comprador;
}

Venta::~Venta()
{

}

void Venta::mostrar()
{
	cout << "la informacion de la venta es: " << endl;
	cout << "codigo de la venta: " << codigoVenta << endl;
	cout << "monto: " << monto << endl;
	cout << "vehiculo vendido:" << endl;
	vehiculo->mostrar();
	cout << "comprador: " << endl;
	comprador->mostrar();
}

string Venta::getCodigoVenta()
{
	return codigoVenta;
}

string Venta::getPatente()
{
	return vehiculo->getPatente();
}