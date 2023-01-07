#include "Fiesta.h"

Fiesta::Fiesta() : personas(10)
{

}

Fiesta::~Fiesta()
{

}

void Fiesta::registrar(Persona* p1)
{
	personas.registrar(p1);
}