#pragma once

#include "Compuesto.h"

class ModEquiposElectronicos
{
private:
	int cantMaxEquipos;
	Simple** objetosElectronicosSimples;
	Compuesto** objetosElectronicosCompuestos;
	int indSimple;
	int indComp;
public:
	ModEquiposElectronicos(int cantMaxEquipos);
	~ModEquiposElectronicos();
	void registrarCompuesto(int codigo, string nombre);
	void registrarSimple(int codigo, string nombre);
	void mostrarSimples();
	void mostrarCompuestos();
	void mostrar();
	void aumentarSimple(Simple* simple);
	void aumentarCompuesto(Compuesto* compuesto);
	Simple* buscarSimple(int codigo);
	Compuesto* buscarCompuesto(int codigo);

};

