#include "Voluntarios.h"


Voluntarios::Voluntarios() : voluntarios()
{

}

Voluntarios::~Voluntarios()
{

}

Lista<Voluntario>& Voluntarios::getVoluntarios()
{
	return voluntarios;
}

Voluntarios& Voluntarios::getInst()
{
	static Voluntarios instancia;
	return instancia;
}


string Voluntarios::toString()
{
	stringstream ss;
	ordenar();
	Nodo<Voluntario>* aux = voluntarios.getPrimer();
	ss << "{voluntarios:[";
	for (int i = 0; i < voluntarios.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != voluntarios.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void Voluntarios::registrar(Asistente* p1)
{
	Voluntario* voluntario1 = p1;
	voluntarios.registrar(voluntario1);
}

void Voluntarios::registrar(Padrino* p1)
{
	Voluntario* voluntario1 = p1;
	voluntarios.registrar(voluntario1);
}

void Voluntarios::ordenar()
{
	voluntarios.ordenar(Voluntario::cmpNombre);
}

