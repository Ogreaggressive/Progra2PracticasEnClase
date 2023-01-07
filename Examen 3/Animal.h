#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	int codigo;
	string especie;
	int edad;
public:
	Animal(int codigo, string especie, int edad);
	Animal(int codigo);
	~Animal();
	string getAutor();
	int getCodigo();
	void mostrar();
	static void mostrar(Animal* animal);
	bool operator==(Animal* animal);
	static bool cmpCodigo(Animal* p1, Animal* p2);
	virtual string toString() = 0;
};











