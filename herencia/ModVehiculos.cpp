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

void ModVehiculos::registrar(string patente, string marca, int modelo, int km)
{
	if (ind < cantMaxVeh)
	{
		vehiculos[ind] = new Vehiculo(patente,marca,modelo,km);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModVehiculos::aumentar(Vehiculo* vehiculo)
{
	if (ind < cantMaxVeh)
	{
		vehiculos[ind] = vehiculo;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModVehiculos::mostrar()
{
	cout << "------vehiculos-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "vehiculo: " << endl;
		vehiculos[i]->mostrar();
	}
}

Vehiculo* ModVehiculos::buscar(string patente)
{
	//cout << "Vehiculos" << endl;
	for (int i = 0; i < ind; i++)
	{
		if (vehiculos[i]->getPatente() == patente)
		{
			return vehiculos[i];
		}
	}
}

void ModVehiculos::quitarStock(string patente)
{
	for (int i = 0; i < ind; i++)
	{
		if (vehiculos[i]->getPatente() == patente)
		{
			vehiculos[i] = vehiculos[ind-1];
			ind--;
		}
	}
}

void ModVehiculos::ordenarVehiculoAsignado()
{
	string patente1, patente2;
	Vehiculo* vehiculoPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			patente1 = vehiculos[i]->getPatente();
			patente2 = vehiculos[j]->getPatente();
			if (patente1 > patente2)
			{
				vehiculoPasar = vehiculos[i];
				vehiculos[i] = vehiculos[j];
				vehiculos[j] = vehiculoPasar;
			}
		}
	}
}