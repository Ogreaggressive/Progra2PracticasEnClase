#include "Retiro.h"

Retiro::Retiro(int id, int monto, int fecha) : Transaccion(id,monto,fecha)
{

}


Retiro::~Retiro()
{

}

void Retiro::mostrar()
{
	cout << "---Retiro---" << endl;
	//cout << "peso: " << peso << endl;
}

string Retiro::toString()
{
	stringstream ss;
	ss << "{tipo:retiro,";
	ss << "id:" << id << ",monto:" << monto << ",fecha:"<<fecha;
	ss << "}";
	return ss.str();
}










