#include "Compuesto.h"

Compuesto::Compuesto(int codigo, string nombre)
{
	this->codigo = codigo;
	this->nombre = nombre;
	ind = 0;
}

Compuesto::~Compuesto()
{

}

int Compuesto::getCodigo()
{
	return codigo;
}

void Compuesto::registrarSimple(int codigo, string nombre)
{
	if (ind < CANT_MAX_SIMP)
	{
		simples[ind] = new Simple(codigo, nombre);
		ind++;
	}
	else
	{
		cout << "Error, limite de equipos excedido!" << endl;
	}
}

void Compuesto::mostrarSimples()
{
	for (int i = 0; i < ind; i++)
	{
		cout << "------simple " << i + 1 << "--------" << endl;
		simples[i]->mostrar();
	}
}

void Compuesto::mostrar()
{
	cout << "codigo: " << codigo << endl;
	cout << "nombre: " << nombre << endl;
	mostrarSimples();
}
