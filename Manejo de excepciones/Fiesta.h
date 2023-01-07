#pragma once

#include "Persona.h"
#include "ArrayGenerico.h"

class Fiesta
{
private:
	ArrayGenerico<Persona> personas;
public:
	Fiesta();
	~Fiesta();
	void registrar(Persona* p1);
};

