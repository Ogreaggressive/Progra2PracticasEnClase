#include "ModuloEquipos.h"


ModuloEquipos::ModuloEquipos()
{
	ind = 0;
}

ModuloEquipos::~ModuloEquipos()
{
	for (int i = 0; i < ind; i++)
	{
		delete equipos[i];
	}
}

void ModuloEquipos::registrar(string nombre)
{
	if (ind < CANT_MAX_EQUIPOS)
	{
		equipos[ind] = new Equipo(nombre);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}

}
void ModuloEquipos::mostrar()
{
	for (int i = 0; i < ind; i++)
	{
		equipos[i]->mostrar();
	}
}

Equipo* ModuloEquipos::buscar(string nombre)
{
	for (int i = 0; i < ind; i++)
	{
		if (equipos[i]->getNombre() == nombre)
		{
			return equipos[i];
		}
	}
}