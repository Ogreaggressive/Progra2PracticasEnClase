#include "Disciplina.h"

Disciplina::Disciplina(string nombre)
{
	this->nombre = nombre;
}


Disciplina::~Disciplina()
{

}

string Disciplina::getNombre()
{
	return nombre;
}

void Disciplina::mostrar()
{
	//cout << "Disciplina:" << endl;
	cout << "nombre: " << nombre << endl;
}


void Disciplina::mostrar(Disciplina* Disciplina)
{
	Disciplina->mostrar();
}

bool Disciplina::operator==(Disciplina* Disciplina)
{
	if (nombre == Disciplina->nombre)
	{
		return true;
	}
	return false;
}

bool Disciplina::compNomAsc(Disciplina* p1, Disciplina* p2)
{
	return p1->nombre > p2->nombre;
}

string Disciplina::toString()
{
	stringstream ss;
	ss << "{nombre:" << nombre;
	ss << ",grupos:[";
	Nodo<Grupo>* aux = grupos.getPrimer();

	for (int i = 0; i < grupos.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		if (i != grupos.getTam() - 1)
		{
			aux = aux->getSiguiente();
		}
		if (i != grupos.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

ListaGenerica<Grupo>* Disciplina::getGrupos()
{
	return &grupos;
}

