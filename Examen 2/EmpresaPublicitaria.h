#pragma once

#include "ModProyectos.h"

class EmpresaPublicitaria
{
private:
	ModProyectos* modProyectos;
public:
	EmpresaPublicitaria(int cantMaxProyectos);
	~EmpresaPublicitaria();
	ModProyectos* getModProyectos();
};


