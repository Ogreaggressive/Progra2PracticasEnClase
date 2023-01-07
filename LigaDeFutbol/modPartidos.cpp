#include "ModPartidos.h"


ModuloPartidos::ModuloPartidos()
{
	ind = 0;
}

ModuloPartidos::~ModuloPartidos()
{
	for (int i = 0; i < ind; i++)
	{
		delete partidos[i];
	}
}

void ModuloPartidos::registrar(long fecha, Equipo* local, Equipo* visitante)
{
	if (ind < CANT_MAX_PARTIDOS)
	{
		partidos[ind] = new Partido(fecha,local, visitante);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}

}
void ModuloPartidos::mostrar()
{
	for (int i = 0; i < ind; i++)
	{
		partidos[i]->mostrar();
	}
}
