#pragma once

#include <iostream>
#include <string>

using namespace std;

class Mecanico
{
private:
	int ci;
	string nombre;
public:
	Mecanico(int ci, string nombre);
	~Mecanico();
	int getCi();
	string getNombre();
	void mostrar();
	

};

