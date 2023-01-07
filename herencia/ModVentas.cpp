#include "ModVentas.h"

ModVentas::ModVentas(int cantMaxVentas)
{
	ventas = new Venta * [cantMaxVentas];
	this->cantMaxVentas = cantMaxVentas;
	ind = 0;
}

ModVentas::~ModVentas()
{
	for (int i = 0; i < ind; i++)
	{
		delete ventas[i];
	}
	delete[] ventas;
}

void ModVentas::registrar(string codigoVenta, int monto, Vehiculo* vehiculo, Persona* comprador)
{
	if (ind < cantMaxVentas)
	{
		ventas[ind] = new Venta(codigoVenta, monto, vehiculo, comprador);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}


void ModVentas::mostrar()
{
	cout << "------ventas-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "venta: " << endl;
		ventas[i]->mostrar();
	}
}

//error not all control paths return a value??
/*
Venta* ModVentas::buscar(string codigoVenta)
{
	//cout << "Ventas" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (ventas[i]->getCodigoVenta() == codigoVenta)
		{
			return ventas[i];
		}
	}
}*/


void ModVentas::ordenar()
{
	string patente1, patente2;
	Venta* ventaPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			patente1 = ventas[i]->getPatente();
			patente2 = ventas[j]->getPatente();
			if (patente1 > patente2)
			{
				ventaPasar = ventas[i];
				ventas[i] = ventas[j];
				ventas[j] = ventaPasar;
			}
		}
	}
}