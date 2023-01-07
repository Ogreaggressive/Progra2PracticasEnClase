#pragma once

#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
	int ci;
	string nombre;
public:
	Persona(int ci, string nombre);
	~Persona();
	int getCi();
	string getNombre();
	void mostrar();
};



