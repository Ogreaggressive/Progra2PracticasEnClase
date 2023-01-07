#pragma once
#include <iostream>

using namespace std;

class Mecanico
{
private:
	int ci;
	string nombre;
public:
	Mecanico(int ci, string nombre);
	~Mecanico();
	void mostrar();
};