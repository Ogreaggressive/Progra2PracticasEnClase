#include "Deposito.h"

Deposito::Deposito(int id, int monto, int fecha) : Transaccion(id, monto, fecha)
{

}


Deposito::~Deposito()
{

}

void Deposito::mostrar()
{
	cout << "---Deposito---" << endl;
	//cout << "peso: " << peso << endl;
}

string Deposito::toString()
{
	stringstream ss;
	ss << "{tipo:deposito,";
	ss << "id:" << id << ",monto:" << monto << ",fecha:" << fecha;
	ss << "}";
	return ss.str();
}











