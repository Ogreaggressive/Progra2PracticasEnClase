#include "Persona.h"

Persona::Persona(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Persona::Persona(string nombre)
{
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
	cout << "nombre: " << nombre << endl;
}


void Persona::mostrar(Persona* persona)
{
	persona->mostrar();
}

bool Persona::operator==(Persona* persona)
{
	if (nombre == persona->nombre)
	{
		return true;
	}
	return false;
}

bool Persona::compCiAsc(Persona* p1, Persona* p2)
{
	return p1->ci > p2->ci;
}

bool Persona::compNomAsc(Persona* p1, Persona* p2)
{
	return p1->nombre > p2->nombre;
}

string Persona::toString()
{
	stringstream ss;
	ss << nombre;
	return ss.str();
}

