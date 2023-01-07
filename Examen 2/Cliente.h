#pragma once

#include <iostream>
#include <string>

using namespace std;

class Cliente
{
private:
	int ci;
	string nombre;
public:
	Cliente(int ci, string nombre);
	~Cliente();
	int getCi();
	string getNombre();
	void mostrar();
};




