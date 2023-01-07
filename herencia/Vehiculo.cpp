#include "Vehiculo.h"

Vehiculo::Vehiculo(string patente)
{
	this->patente = patente;
}

Vehiculo::Vehiculo(string patente, string marca, int modelo, int km)
{
	this->patente = patente;
	this->marca = marca;
	this->modelo = modelo;
	this->km = km;
}

Vehiculo::~Vehiculo()
{

}

string Vehiculo::getPatente()
{
	return patente;
}

void Vehiculo::mostrar()
{
	cout << "patente: " << patente << endl;
	cout << "marca: " << marca << endl;
	cout << "modelo: " << modelo << endl;
	cout << "km: " << km << endl;
}

void Vehiculo::mostrar(Vehiculo* vehiculo)
{
	vehiculo->mostrar();
}

bool Vehiculo::operator==(Vehiculo* vehiculo)
{
	if (patente == vehiculo->patente)
	{
		return true;
	}
	return false;
}

bool Vehiculo::compPatAsc(Vehiculo* v1, Vehiculo* v2)
{
	return v1->patente < v2->patente;
}

bool Vehiculo::compPatDes(Vehiculo* v1, Vehiculo* v2)
{
	return v1->patente > v2->patente;
}

