#include "Partido.h"

Partido::Partido(long fecha, Equipo* local, Equipo* visitante)
{
	this->fecha = fecha;
	this->local = local;
	this->visitante = visitante;
}

Partido::~Partido()
{
}

void Partido::mostrar()
{
	cout << "------------Partido--------" << endl;
	cout << "fecha: " << fecha << endl;
	cout << "local: " << endl;
	local->mostrar();
	cout << "visitante: " << endl;
	visitante->mostrar();
}