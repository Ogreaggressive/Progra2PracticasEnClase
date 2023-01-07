#include "Animal.h"

Animal::Animal(int codigo, string especie, int edad)
{
	this->codigo = codigo;
	this->especie = especie;
	this->edad = edad;
}

Animal::Animal(int codigo)
{
	this->codigo = codigo;
}

Animal::~Animal()
{

}

int Animal::getCodigo()
{
	return codigo;
}


void Animal::mostrar()
{
	//cout << "Animal:" << endl;
	cout << "id:" << codigo << endl;
	cout << "especie:" << especie << endl;
	cout << "edad:" << edad << endl;

}


void Animal::mostrar(Animal* animal)
{
	animal->mostrar();
}

bool Animal::operator==(Animal* animal)
{
	if (codigo == animal->codigo)
	{
		return true;
	}
	return false;
}

bool Animal::cmpCodigo(Animal* p1, Animal* p2)
{
	return p1->codigo > p2->codigo;
}

