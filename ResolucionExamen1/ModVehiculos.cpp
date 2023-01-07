#include "ModVehiculos.h"

ModVehiculos::ModVehiculos(int cantMaxVeh)
{
	vehiculos = new Vehiculo * [cantMaxVeh];
	this->cantMaxVeh = cantMaxVeh;
	ind = 0;
}

ModVehiculos::~ModVehiculos()
{
	for (int i = 0; i < ind; i++)
	{
		delete vehiculos[i];
	}
	delete[] vehiculos;
}

void ModVehiculos::registrar(string placa, int modelo, string marca)
{
	if (ind < cantMaxVeh)
	{
		vehiculos[ind] = new Vehiculo(placa, modelo, marca);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

Vehiculo* ModVehiculos::buscar(string placa)
{
	cout << "Vehiculos" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (vehiculos[i]->getPlaca() == placa)
		{
			return vehiculos[i];
		}
	}
}

void ModVehiculos::mostrar()
{
	cout << "------vehiculos-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		vehiculos[i]->mostrar();
	}
}