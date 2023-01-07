#include "Animales.h"


Animales::Animales() : animales()
{

}

Animales::~Animales()
{

}

Lista<Animal>& Animales::getAnimales()
{
	return animales;
}

Animales& Animales::getInst()
{
	static Animales instancia;
	return instancia;
}


string Animales::toString()
{
	stringstream ss;
	ordenar();
	Nodo<Animal>* aux = animales.getPrimer();
	ss << "{animales:[";
	for (int i = 0; i < animales.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != animales.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void Animales::registrar(int codigo, string especie, int edad, bool vuela)
{
	Ave* ave = new Ave(codigo,especie,edad,vuela);
	Animal* animal1 = ave;
	animales.registrar(animal1);
}

void Animales::registrar(int codigo, string especie, int edad, int peso)
{
	Felino* felino = new Felino(codigo,especie,edad,peso);
	Animal* animal1 = felino;
	animales.registrar(animal1);
}

void Animales::ordenar()
{
	animales.ordenar(Animal::cmpCodigo);
}
