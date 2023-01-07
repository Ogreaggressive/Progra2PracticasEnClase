#include "Jugador.h"

Jugador::Jugador(int ci, string nombre, int fono)
{
	this->ci = ci;
	this->nombre = nombre;
	this->fono = fono;
}

Jugador::Jugador(int ci)
{
	this->ci = ci;
}


Jugador::~Jugador()
{

}

int Jugador::getCi()
{
	return ci;
}

string Jugador::getNombre()
{
	return nombre;
}

void Jugador::mostrar()
{
	//cout << "Jugador:" << endl;
	cout << "nombre: " << nombre << endl;
}


void Jugador::mostrar(Jugador* Jugador)
{
	Jugador->mostrar();
}

bool Jugador::operator==(Jugador* Jugador)
{
	if (ci == Jugador->ci)
	{
		return true;
	}
	return false;
}

bool Jugador::compCiAsc(Jugador* p1, Jugador* p2)
{
	return p1->ci > p2->ci;
}

bool Jugador::compNomAsc(Jugador* p1, Jugador* p2)
{
	return p1->nombre > p2->nombre;
}

string Jugador::toString()
{
	stringstream ss;
	ss << "{ci:" << ci << ",nombre:" << nombre << ",fono:" << fono;
	ss << "}";
	return ss.str();
}

string Jugador::getNombreSS()
{
	stringstream ss;
	ss << nombre;
	return ss.str();
}

