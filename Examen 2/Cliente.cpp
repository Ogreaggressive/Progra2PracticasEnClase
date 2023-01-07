#include "Cliente.h"

Cliente::Cliente(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Cliente::~Cliente()
{

}

int Cliente::getCi()
{
	return ci;
}

string Cliente::getNombre()
{
	return nombre;
}

void Cliente::mostrar()
{
	//cout << "Cliente:" << endl;
	cout << "Ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
}



