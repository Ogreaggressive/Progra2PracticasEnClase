#include "Transaccion.h"

Transaccion::Transaccion(int id, int monto, int fecha)
{
	this->id = id;
	this->monto = monto;
	this->fecha = fecha;
}

Transaccion::Transaccion(int id)
{
	this->id = id;
}

Transaccion::~Transaccion()
{

}

int Transaccion::getMonto()
{
	return monto;
}

int Transaccion::getId()
{
	return id;
}

int Transaccion::getFecha()
{
	return fecha;
}



void Transaccion::mostrar()
{
	//cout << "Transaccion:" << endl;

}


void Transaccion::mostrar(Transaccion* Transaccion)
{
	Transaccion->mostrar();
}

bool Transaccion::operator==(Transaccion* Transaccion)
{
	if (id == Transaccion->id)
	{
		return true;
	}
	return false;
}

bool Transaccion::cmpId(Transaccion* p1, Transaccion* p2)
{
	return p1->id > p2->id;
}

bool Transaccion::cmpIdInverso(Transaccion* p1, Transaccion* p2)
{
	return p1->id < p2->id;
}

bool Transaccion::cmpFecha(Transaccion* p1, Transaccion* p2)
{
	return p1->fecha > p2->fecha;
}




