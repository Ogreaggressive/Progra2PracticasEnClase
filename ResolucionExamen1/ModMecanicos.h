#pragma once

#include "Mecanico.h"

#define Tam 100

class ModMecanicos
{
private:
	Mecanico** mecanicos;
	int cantMaxMec;
	int ind;
public:
	ModMecanicos(int cantMaxMec);
	~ModMecanicos();
	void registrar(int ci, string nombre);
	Mecanico* buscar(int ci);
	void mostrar();
};

