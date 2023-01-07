#include "ModProyectos.h"

ModProyectos::ModProyectos(int cantMaxProyectos)
{
	proyectos = new Proyecto * [cantMaxProyectos];
	this->cantMaxProyectos = cantMaxProyectos;
	ind = 0;
}

ModProyectos::~ModProyectos()
{
	for (int i = 0; i < ind; i++)
	{
		delete proyectos[i];
	}
	delete[] proyectos;
}

void ModProyectos::registrar(string codigo, string nombre, int fechaIni, int fechaFin, Cliente* cliente)
{
	if (ind < cantMaxProyectos)
	{
		proyectos[ind] = new Proyecto(codigo, nombre, fechaIni, fechaFin, cliente);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModProyectos::aumentar(Proyecto* proyecto)
{
	if (ind < cantMaxProyectos)
	{
		proyectos[ind] = proyecto;
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModProyectos::mostrar()
{
	cout << "------Proyectos-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		cout << "Proyecto " << i + 1 << endl;
		proyectos[i]->mostrar();
	}
}

void ModProyectos::ordenarProyectoPorCodigo()
{
	string codigo1, codigo2;
	Proyecto* proyectoPasar;
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{
			codigo1 = proyectos[i]->getCodigo();
			codigo2 = proyectos[j]->getCodigo();
			if (codigo1 > codigo2)
			{
				proyectoPasar = proyectos[i];
				proyectos[i] = proyectos[j];
				proyectos[j] = proyectoPasar;
			}
		}
	}
}








