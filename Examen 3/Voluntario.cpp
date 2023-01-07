#include "Voluntario.h"

Voluntario::Voluntario(int codigo, string nombre)
{
	this->codigo = codigo;
	this->nombre = nombre;
}

Voluntario::Voluntario(int codigo)
{
	this->codigo = codigo;
}

Voluntario::~Voluntario()
{

}

int Voluntario::getCodigo()
{
	return codigo;
}


void Voluntario::mostrar()
{
	//cout << "Voluntario:" << endl;
	cout << "id:" << codigo << endl;
	cout << "nombre:" << nombre << endl;

}


void Voluntario::mostrar(Voluntario* voluntario)
{
	voluntario->mostrar();
}

bool Voluntario::operator==(Voluntario* voluntario)
{
	if (codigo == voluntario->codigo)
	{
		return true;
	}
	return false;
}

bool Voluntario::cmpCodigo(Voluntario* p1, Voluntario* p2)
{
	return p1->codigo > p2->codigo;
}

bool Voluntario::cmpNombre(Voluntario* p1, Voluntario* p2)
{
	return p1->nombre > p2->nombre;
}
