#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class Transaccion
{
protected:
	int id;
	int monto;
	int fecha;
public:
	Transaccion(int id,int monto, int fecha);
	Transaccion(int id);
	~Transaccion();
	void mostrar();
	int getMonto();
	int getId();
	int getFecha();
	static void mostrar(Transaccion* Transaccion);
	bool operator==(Transaccion* Transaccion);
	static bool cmpId(Transaccion* p1, Transaccion* p2);
	static bool cmpIdInverso(Transaccion* p1, Transaccion* p2);
	static bool cmpFecha(Transaccion* p1, Transaccion* p2);
	virtual string toString() = 0;
};



