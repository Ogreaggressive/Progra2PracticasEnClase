#include "ModMantenimientos.h"

ModMantenimientos::ModMantenimientos(int cantMaxMan)
{
	mantenimientos = new Mantenimiento * [cantMaxMan];
	this->cantMaxMan = cantMaxMan;
	ind = 0;
}

ModMantenimientos::~ModMantenimientos()
{
	for (int i = 0; i < ind; i++)
	{
		delete mantenimientos[i];
	}
	delete[] mantenimientos;
}

void ModMantenimientos::registrar(long fecha, string detalle, Mecanico* mecanico, Vehiculo* vehiculo)
{
	if (ind < cantMaxMan)
	{
		mantenimientos[ind] = new Mantenimiento(fecha,detalle,mecanico,vehiculo);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModMantenimientos::mostrar()
{
	cout << "------Mantenimientos-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		mantenimientos[i]->mostrar();
	}
}




