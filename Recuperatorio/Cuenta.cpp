#include "Cuenta.h"

Cuenta::Cuenta(int id, string nombre, int saldo)
{
	this->id = id;
	this->nombre = nombre;
	this->saldo = saldo;
}

Cuenta::Cuenta(int id)
{
	this->id = id;
}


Cuenta::~Cuenta()
{

}

int Cuenta::getId()
{
	return id;
}

string Cuenta::getNombre()
{
	return nombre;
}

void Cuenta::mostrar()
{
	//cout << "Cuenta:" << endl;
	cout << "nombre: " << nombre << endl;
}


void Cuenta::mostrar(Cuenta* Cuenta)
{
	Cuenta->mostrar();
}

bool Cuenta::operator==(Cuenta* Cuenta)
{
	if (id == Cuenta->id)
	{
		return true;
	}
	return false;
}

bool Cuenta::compIdAsc(Cuenta* p1, Cuenta* p2)
{
	return p1->id > p2->id;
}

bool Cuenta::compNomAsc(Cuenta* p1, Cuenta* p2)
{
	return p1->nombre > p2->nombre;
}

string Cuenta::toString()
{
	stringstream ss;
	ss << "{id:" << id << ",titular:" << nombre << ",saldo:" << saldo;
	ordenar();
	Nodo<Transaccion>* aux = transacciones.getPrimer();
	ss << ",transacciones:[";
	for (int i = 0; i < transacciones.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != transacciones.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

string Cuenta::toStringDatos()
{
	stringstream ss;
	ss << "{id:" << id << ",titular:" << nombre << ",saldo:" << saldo;
	ss << "}";
	return ss.str();
}

void Cuenta::ordenar()
{
	transacciones.ordenar(Transaccion::cmpFecha);
}

void Cuenta::aumentarDinero(Transaccion* r1)
{
	transacciones.registrar(r1);
	saldo = saldo + r1->getMonto();
}

void Cuenta::retirarDinero(Transaccion* r1)
{
	transacciones.registrar(r1);
	saldo = saldo - r1->getMonto();
}

void Cuenta::pasarDinero(Transaccion* r1)
{
	Retiro* p1 = new Retiro(r1->getId(),r1->getMonto(),r1->getFecha());
	if (saldo - r1->getMonto() <= 0)
	{
		throw CuentaSinFondosException(id);
	}
	transacciones.registrar(p1);
	
	saldo = saldo - r1->getMonto();
	
}

void Cuenta::recibirDinero(Transaccion* r1)
{
	Deposito* p1 = new Deposito(r1->getId(), r1->getMonto(), r1->getFecha());
	transacciones.registrar(p1);
	saldo = saldo + r1->getMonto();
}