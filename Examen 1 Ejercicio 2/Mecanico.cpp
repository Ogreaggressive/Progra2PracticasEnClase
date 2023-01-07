#include "Mecanico.h"

Mecanico::Mecanico(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Mecanico::~Mecanico()
{

}


void Mecanico::mostrar()
{
	cout << "-----Mecanico-------" << endl;
	cout << "carnet de identidad: " << ci << endl;
	cout << "Nombre: " << nombre << endl;
	
}
