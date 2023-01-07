#include "RedesSociales.h"

RedesSociales::RedesSociales(string codigo, string nombre, int fechaIni, int fechaFin, Cliente* cliente) : Proyecto(codigo,nombre,fechaIni,fechaFin,cliente)
{
	ind = 0;
}

RedesSociales::~RedesSociales()
{

}

void RedesSociales::registrarElemento(string elemento)
{
	if (ind < CANT_MAX_ELEMENTOS)
	{
		elementosGraficos[ind] = elemento;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void RedesSociales::mostrarElementos()
{
	cout << "------elementos-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "elemento: " << endl;
		cout<< elementosGraficos[i]<<endl;
	}
}

void RedesSociales::mostrar()
{
	cout << "---RedesSociales---" << endl;
	Proyecto::mostrar();
	mostrarElementos();
}

