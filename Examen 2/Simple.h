#pragma once

#include <iostream>
#include <string>

using namespace std;

class Simple
{
private:
	int codigo;
	string nombre;
public:
	Simple(int codigo, string nombre);
	~Simple();
	int getCodigo();
	void mostrar();
};

