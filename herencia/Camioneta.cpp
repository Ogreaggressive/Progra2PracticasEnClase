#include "Camioneta.h"

Camioneta::Camioneta(string patente, string marca, int modelo, int km, int capMax) : Vehiculo(patente,marca,modelo,km)
{
	this->capMax = capMax;
}

Camioneta::~Camioneta()
{

}

void Camioneta::mostrar()
{
	cout << "---camioneta---" << endl;
	Vehiculo::mostrar();
	cout << "capacidad maxima: " << capMax <<endl;
}
