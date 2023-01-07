#include "Evento.h"

Evento::Evento(int minuto, string equipo)
{
	this->equipo = equipo;
}

Evento::Evento(int minuto)
{
	this->minuto = minuto;
}

Evento::~Evento()
{

}


void Evento::mostrar()
{
	//cout << "Evento:" << endl;
	cout << "id:" << minuto << endl;
	cout << "equipo:" << equipo << endl;

}


void Evento::mostrar(Evento* Evento)
{
	Evento->mostrar();
}

bool Evento::operator==(Evento* Evento)
{
	if (minuto == Evento->minuto)
	{
		return true;
	}
	return false;
}

bool Evento::cmpMinuto(Evento* p1, Evento* p2)
{
	return p1->minuto > p2->minuto;
}



