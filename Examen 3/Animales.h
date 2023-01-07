#pragma once

#include "Felino.h"
#include "Ave.h"
#include "Animal.h"
#include "Lista.h"

class Animales
{
private:
	Lista<Animal> animales;
public:
	static Animales& getInst();
	~Animales();
	Lista<Animal>& getAnimales();
	string toString();
	void registrar(int codigo, string especie, int edad, bool vuela);
	void registrar(int codigo, string especie, int edad, int peso);
	void ordenar();
	Animal* buscar(int CI);

private:
	Animales();
};





