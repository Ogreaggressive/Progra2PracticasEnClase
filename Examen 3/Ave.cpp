#include "Ave.h"

Ave::Ave(int codigo, string especie, int edad, bool vuela) : Animal(codigo,especie,edad)
{
	this->vuela = vuela;
}

Ave::Ave(int codigo) : Animal(codigo)
{

}

Ave::~Ave()
{

}

void Ave::mostrar()
{
	cout << "---Ave---" << endl;
	Animal::mostrar();
	//cout << "peso: " << peso << endl;
}

string Ave::toString()
{
	stringstream ss;
	ss << "{Ave:{";
	ss << "codigo:" << codigo << ",especie:" << especie << ",edad:" << edad;
	if (vuela == true)
	{
		ss << "},tipo:aerea}";
	}
	else
	{
		ss << "},tipo:terrestre}";
	}
	return ss.str();
}







