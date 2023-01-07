#pragma once

#include <sstream>
#include <iostream>
#include <string>

#include "Lista.h"

using namespace std;

class Voluntario
{
protected:
	int codigo;
	string nombre;
public:
	Voluntario(int codigo, string nombre);
	Voluntario(int codigo);
	~Voluntario();
	string getAutor();
	int getCodigo();
	void mostrar();
	static void mostrar(Voluntario* voluntario);
	bool operator==(Voluntario* voluntario);
	static bool cmpCodigo(Voluntario* p1, Voluntario* p2);
	static bool cmpNombre(Voluntario* p1, Voluntario* p2);
	virtual string toString() = 0;
};













