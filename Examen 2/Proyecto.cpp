#include "Proyecto.h"

Proyecto::Proyecto(string codigo, string nombre, int fechaIni, int fechaFin, Cliente* cliente)
{
	this->codigo = codigo;
	this->nombre = nombre;
	this->fechaIni = fechaIni;
	this->fechaFin = fechaFin;
	this->cliente = cliente;
}

Proyecto::~Proyecto()
{

}

string Proyecto::getCodigo()
{
	return codigo;
}

void Proyecto::mostrar()
{
	cout << "codigo: " << codigo << endl;
	cout << "nombre: " << nombre << endl;
	cout << "fechaIni: " << fechaIni << endl;
	cout << "fechaFin: " << fechaFin << endl;
	cliente->mostrar();
}