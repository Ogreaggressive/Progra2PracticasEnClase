#include "Persona.h"

Persona::Persona(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Persona::~Persona()
{

}

int Persona::getCi()
{
	return ci;
}

string Persona::getNombre()
{
	return nombre;
}

void Persona::mostrar()
{
	//cout << "Persona:" << endl;
	cout << "Ci: " << ci << endl;
	cout << "nombre: " << nombre << endl;
}


