#include "Equipo.h"

Equipo::Equipo(string nombre)
{
	this->nombre = nombre;
}



Equipo::~Equipo()
{

}

string Equipo::getNombre()
{
	return nombre;
}

void Equipo::mostrar()
{
	//cout << "Equipo:" << endl;
	cout << "nombre: " << nombre << endl;
}


void Equipo::mostrar(Equipo* Equipo)
{
	Equipo->mostrar();
}

bool Equipo::operator==(Equipo* Equipo)
{
	if (nombre == Equipo->nombre)
	{
		return true;
	}
	return false;
}


bool Equipo::compNomAsc(Equipo* p1, Equipo* p2)
{
	return p1->nombre > p2->nombre;
}

string Equipo::toString()
{
	stringstream ss;
	ss << "{nombre:"<<nombre;
	ordenar();
	Nodo<Jugador>* aux = jugadores.getPrimer();
	ss << ",jugadores:[";
	for (int i = 0; i < jugadores.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != jugadores.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}


void Equipo::ordenar()
{
	jugadores.ordenar(Jugador::compCiAsc);
}

void Equipo::registrarJugador(int ci, string nombre, int fono)
{
	Jugador* p1 = new Jugador(ci, nombre, fono);
	jugadores.registrar(p1);

}

Jugador* Equipo::buscarJugador(int ci)
{
	Jugador* c1 = new Jugador(ci);
	return jugadores.buscar(c1);
}