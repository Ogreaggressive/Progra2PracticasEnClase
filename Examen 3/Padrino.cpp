#include "Padrino.h"

Padrino::Padrino(int codigo, string nombre) : Voluntario(codigo,nombre)
{

}

Padrino::Padrino(int codigo) : Voluntario(codigo)
{

}

Padrino::~Padrino()
{

}

void Padrino::mostrar()
{
	cout << "---Padrino---" << endl;
	Voluntario::mostrar();
	//cout << "peso: " << peso << endl;
}

string Padrino::toString()
{
	stringstream ss;
	//ss << "{Padrino:{";
	ss << "{ci:" << codigo << ",nombre:" << nombre;
	ss << ",pagos:[";
	for (int i = 0; i < pagos.getTam(); i++)
	{
		ss << pagos[i]->toString();
		if (i != pagos.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void Padrino::realizarPago(Pago* pago)
{
	pagos.registrar(pago);
}







