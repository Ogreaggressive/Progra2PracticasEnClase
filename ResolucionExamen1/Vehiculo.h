#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vehiculo
{
private:
	string placa;
	int modelo;
	string marca;
public:
	Vehiculo(string placa, int modelo, string marca);
	~Vehiculo();
	string getPlaca();
	void mostrar();


};



