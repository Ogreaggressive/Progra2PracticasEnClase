#include "Felino.h"

Felino::Felino(int codigo, string especie, int edad,int peso) : Animal(codigo, especie, edad)
{
	this->peso = peso;
}

Felino::Felino(int codigo) : Animal(codigo)
{

}

Felino::~Felino()
{

}

void Felino::mostrar()
{
	cout << "---Felino---" << endl;
	Animal::mostrar();
	//cout << "peso: " << peso << endl;
}

string Felino::toString()
{
	stringstream ss;
	ss << "{Felino:{";
	ss << "codigo:" << codigo << ",especie:" << especie << ",edad:" << edad;
	ss << "},peso:" << peso << "}";
	return ss.str();
}








