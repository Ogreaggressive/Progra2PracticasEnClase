#include "Partido.h"

Partido::Partido(int id, Equipo* p1, Equipo* p2)
{
	this->id = id;
	this->p1 = p1;
	this->p2 = p2;
}

Partido::Partido(int id)
{
	this->id = id;
}


Partido::~Partido()
{

}

int Partido::getId()
{
	return id;
}

void Partido::mostrar()
{
	//cout << "Partido:" << endl;
	cout << "id: " << id << endl;
}


void Partido::mostrar(Partido* Partido)
{
	Partido->mostrar();
}

bool Partido::operator==(Partido* Partido)
{
	if (id == Partido->id)
	{
		return true;
	}
	return false;
}


bool Partido::compIdAsc(Partido* p1, Partido* p2)
{
	return p1->id > p2->id;
}

string Partido::toString()
{
	stringstream ss;
	ss << "{id:" << id;
	ss << ",local:";
	ss << p1->toString();
	ss << ",visitante:";
	ss << p2->toString();
	//ss << "}";

	//ss << "{eventos:";
	ordenar();
	Nodo<Evento>* aux = eventos.getPrimer();
	ss << ",eventos:[";
	for (int i = 0; i < eventos.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		if (i != eventos.getTam() - 1)
		{
			aux = aux->getSiguiente();
		}
		if (i != eventos.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void Partido::ordenar()
{
	//eventos.ordenar(Evento::cmpMinuto);
}

void Partido::gol(int minuto, string equipo, int ci)
{
	Equipo* e1 = new Equipo(equipo);
	if (p1->buscarJugador(ci) == NULL)
	{
		Jugador* jug1 =p2->buscarJugador(ci);
	}
	Jugador* jug1 = p1->buscarJugador(ci);
	Gol* gol1 = new Gol(minuto, equipo, jug1);
	Evento* evento1 = gol1;
	eventos.registrar(evento1);
}