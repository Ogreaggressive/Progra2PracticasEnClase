#include "Gol.h"

Gol::Gol(int minuto, string equipo, Jugador* p1) : Evento(minuto,equipo)
{
	this->p1 = p1;
}


Gol::~Gol()
{

}

void Gol::mostrar()
{
	cout << "---Gol---" << endl;
	//cout << "peso: " << peso << endl;
}

string Gol::toString()
{
	stringstream ss;
	ss << "{tipo:gol,";
	ss << "minuto:" << minuto << ",equipo:" << equipo << ",jugador:"/* << p1->getNombreSS()*/;
	ss << "}";
	return ss.str();
}









