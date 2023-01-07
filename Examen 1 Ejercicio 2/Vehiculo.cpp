#include "Vehiculo.h"

Vehiculo::Vehiculo(int placa, int propietarioCI)
{
	this->placa = placa;
	this->propietarioCI = propietarioCI;
}
Vehiculo::~Vehiculo()
{

}

void Vehiculo::mostrar()
{
	cout << "-----Vehiculo-------" << endl;
	cout << "Placa: " << placa << endl;
	cout << "Carnet de identidad del propietario: " << propietarioCI << endl;
}
