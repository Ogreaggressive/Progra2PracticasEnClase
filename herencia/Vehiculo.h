#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vehiculo
{
protected:
	string marca;
	string patente;
	int modelo;
	int km;
public:
	Vehiculo(string patente);
	Vehiculo(string patente,string marca, int modelo, int km);
	~Vehiculo();
	string getPatente();
	virtual void mostrar();
	static void mostrar(Vehiculo* vehiculo);
	bool operator==(Vehiculo* vehiculo);
	static bool compPatAsc(Vehiculo* v1, Vehiculo* v2);
	static bool compPatDes(Vehiculo* v1, Vehiculo* v2);
};

