#include "Vehiculo.h"

Vehiculo::Vehiculo(string placa, int modelo, string marca)
{
	this->placa = placa;
	this->modelo = modelo;
	this->marca = marca;
}

Vehiculo::~Vehiculo()
{

}

string Vehiculo::getPlaca()
{
	return placa;
}

void Vehiculo::mostrar()
{
	cout << "-----Vehiculo-------" << endl;
	cout << "placa: " << placa << endl;
	cout << "modelo: " << modelo << endl;
	cout << "marca: " << marca << endl;
}