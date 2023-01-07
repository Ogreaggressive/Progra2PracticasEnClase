#include "Transferencia.h"

Transferencia::Transferencia(Cuenta* cuentaOrigen, Cuenta* cuentaDestino, int id, int monto, int fecha) : Transaccion(id, monto, fecha)
{
	this->cuentaOrigen = cuentaOrigen;
	this->cuentaDestino = cuentaDestino;
}


Transferencia::~Transferencia()
{

}

void Transferencia::mostrar()
{
	cout << "---Transferencia---" << endl;
	//cout << "peso: " << peso << endl;
}

string Transferencia::toString()
{
	stringstream ss;
	ss << "{tipo:transferencia,";
	ss << "id:" << id;
	ss<<",origen:";
	ss << cuentaOrigen->toStringDatos();
	ss << ",destino:";
	ss << cuentaDestino->toStringDatos();
	ss<<",monto:" << monto << ",fecha:" << fecha;
	ss << "}";
	return ss.str();
}












