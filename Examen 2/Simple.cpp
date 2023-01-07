#include "Simple.h"

Simple::Simple(int codigo, string nombre)
{
	this->codigo = codigo;
	this->nombre = nombre;
}

Simple::~Simple()
{

}

int Simple::getCodigo()
{
	return codigo;
}


void Simple::mostrar()
{
	cout << "codigo: " << codigo << endl;
	cout << "nombre: " << nombre << endl;
}