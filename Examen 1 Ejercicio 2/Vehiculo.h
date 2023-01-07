#pragma once
#include <iostream>

using namespace std;

class Vehiculo
{
private:
	int placa;
	int propietarioCI;
public:
	Vehiculo(int placa, int propietarioCI);
	~Vehiculo();
	void mostrar();
};
