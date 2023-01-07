#include "ModEquiposElectronicos.h"

ModEquiposElectronicos::ModEquiposElectronicos(int cantMaxEquipos)
{
	this->cantMaxEquipos = cantMaxEquipos;
	objetosElectronicosSimples = new Simple * [cantMaxEquipos];
	objetosElectronicosCompuestos = new Compuesto * [cantMaxEquipos];
	indSimple = 0;
	indComp = 0;
}

ModEquiposElectronicos::~ModEquiposElectronicos()
{

	for (int i = 0; i < indSimple; i++)
	{
		delete objetosElectronicosSimples[i];
	}
	delete[] objetosElectronicosSimples;

	for (int i = 0; i < indComp; i++)
	{
		delete objetosElectronicosCompuestos[i];
	}
	delete[] objetosElectronicosCompuestos;
}

void ModEquiposElectronicos::registrarSimple(int codigo, string nombre)
{
	if (indSimple < cantMaxEquipos)
	{
		objetosElectronicosSimples[indSimple] = new Simple(codigo,nombre);
		indSimple++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModEquiposElectronicos::registrarCompuesto(int codigo, string nombre)
{
	if (indComp < cantMaxEquipos)
	{
		objetosElectronicosCompuestos[indComp] = new Compuesto(codigo, nombre);
		indComp++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}


void ModEquiposElectronicos::aumentarSimple(Simple* simple)
{
	if (indSimple < cantMaxEquipos)
	{
		objetosElectronicosSimples[indSimple] = simple;
		indSimple++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModEquiposElectronicos::aumentarCompuesto(Compuesto* compuesto)
{
	if (indComp < cantMaxEquipos)
	{
		objetosElectronicosCompuestos[indComp] = compuesto;
		indComp++;
	}
	else
	{
		cout << "error, limite excedido" << endl;
	}
}

void ModEquiposElectronicos::mostrarSimples()
{
	cout << "------EquiposElectronicos-------" << endl;
	for (int i = 0; i < indSimple; i++)
	{
		cout << "equipos simples: " << endl;
		objetosElectronicosSimples[i]->mostrar();
	}
}

void ModEquiposElectronicos::mostrarCompuestos()
{
	cout << "------EquiposElectronicos-------" << endl;
	for (int i = 0; i < indComp; i++)
	{
		cout << "equipos compuestos: " << endl;
		objetosElectronicosCompuestos[i]->mostrar();
	}
}

Simple* ModEquiposElectronicos::buscarSimple(int codigo)
{
	//cout << "EquiposElectronicos" << endl;
	for (int i = 0; i < indSimple; i++)
	{
		if (objetosElectronicosSimples[i]->getCodigo() == codigo)
		{
			return objetosElectronicosSimples[i];
		}
	}
}

Compuesto* ModEquiposElectronicos::buscarCompuesto(int codigo)
{
	//cout << "EquiposElectronicos" << endl;
	for (int i = 0; i < indComp; i++)
	{
		if (objetosElectronicosCompuestos[i]->getCodigo() == codigo)
		{
			return objetosElectronicosCompuestos[i];
		}
	}
}


