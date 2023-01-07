#pragma once

#include "Proyecto.h"

class ModProyectos
{
private:
	Proyecto** proyectos;
	int cantMaxProyectos;
	int ind;
public:
	ModProyectos(int cantMaxProyectos);
	~ModProyectos();
	void registrar(string codigo, string nombre, int fechaIni, int fechaFin, Cliente* cliente);
	void aumentar(Proyecto* proyecto);
	void mostrar();
	void ordenarProyectoPorCodigo();
};

