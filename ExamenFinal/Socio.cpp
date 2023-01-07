#include "Socio.h"

Socio::Socio(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Socio::Socio(int ci)
{
	this->ci = ci;
}


Socio::~Socio()
{

}

int Socio::getCi()
{
	return ci;
}

string Socio::getNombre()
{
	return nombre;
}

void Socio::mostrar()
{
	//cout << "Socio:" << endl;
	cout << "nombre: " << nombre << endl;
}


void Socio::mostrar(Socio* Socio)
{
	Socio->mostrar();
}

bool Socio::operator==(Socio* Socio)
{
	if (ci == Socio->ci)
	{
		return true;
	}
	return false;
}

bool Socio::compCiAsc(Socio* p1, Socio* p2)
{
	return p1->ci > p2->ci;
}

bool Socio::compNomAsc(Socio* p1, Socio* p2)
{
	return p1->nombre > p2->nombre;
}

string Socio::toString()
{
	stringstream ss;
	ss << "{ci:" << ci << ",nombre:" << nombre;
	ss << "}";
	return ss.str();
}
