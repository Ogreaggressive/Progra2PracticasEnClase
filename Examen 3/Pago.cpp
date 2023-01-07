#include "Pago.h"

Pago::Pago(int monto, int fecha)
{
	this->monto = monto;
	this->fecha = fecha;
}

Pago::~Pago()
{

}


string Pago::toString()
{
	stringstream ss;
	ss << "{monto:"<<monto<<",fecha:"<<fecha<<"}";
	return ss.str();
}
