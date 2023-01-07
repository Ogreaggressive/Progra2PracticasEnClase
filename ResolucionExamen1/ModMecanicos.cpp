#include "ModMecanicos.h"

ModMecanicos::ModMecanicos(int cantMaxMec)
{
	mecanicos = new Mecanico * [cantMaxMec];
	this->cantMaxMec = cantMaxMec;
	ind = 0;
}

ModMecanicos::~ModMecanicos()
{
	for (int i = 0; i < ind; i++)
	{
		delete mecanicos[i];
	}
	delete[] mecanicos;
}

void ModMecanicos::registrar(int ci, string nombre)
{
	if (ind < cantMaxMec)
	{
		mecanicos[ind] = new Mecanico(ci, nombre);
		ind++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

Mecanico* ModMecanicos::buscar(int ci)
{
	for (int i = 0; i < ind; i++)
	{
		if (mecanicos[i]->getCi() == ci)
		{
			return mecanicos[i];
		}
	}
}

void ModMecanicos::mostrar()
{
	cout << "------Mecanicos-------" << endl;
	for (int i = 0; i < ind; i++)
	{
		mecanicos[i]->mostrar();
	}
}