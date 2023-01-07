#include "EmpresaPublicitaria.h"

EmpresaPublicitaria::EmpresaPublicitaria(int cantMaxClientes)
{
	modProyectos = new ModProyectos(cantMaxClientes);
}

EmpresaPublicitaria::~EmpresaPublicitaria()
{
}


ModProyectos* EmpresaPublicitaria::getModProyectos()
{
	return modProyectos;
}

