#pragma once

#include "Simple.h"

#define CANT_MAX_SIMP 10

class Compuesto
{
private:
	int codigo;
	string nombre;
	Simple* simples[CANT_MAX_SIMP];
	int ind;
public:
	Compuesto(int codigo, string nombre);
	~Compuesto();
	void registrarSimple(int codigo, string nombre);
	int getCodigo();
	void mostrarSimples();
	void mostrar();
};

