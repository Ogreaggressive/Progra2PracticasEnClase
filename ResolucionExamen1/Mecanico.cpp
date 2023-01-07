#include "Mecanico.h"

Mecanico::Mecanico(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Mecanico::~Mecanico()
{

}

int Mecanico::getCi()
{
	return ci;
}

string Mecanico::getNombre()
{
	return nombre;
}

void Mecanico::mostrar()
{
	cout << "-----Mecanico-------" << endl;
	cout << "Ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
}

