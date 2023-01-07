#pragma once

#include "Cliente.h"

class Proyecto
{
protected:
	string codigo;
	string nombre;
	int fechaIni;
	int fechaFin;
	Cliente* cliente;
public:
	Proyecto(string codigo, string nombre, int fechaIni, int fechaFin, Cliente* cliente);
	~Proyecto();
	string getCodigo();
	void mostrar();
};

