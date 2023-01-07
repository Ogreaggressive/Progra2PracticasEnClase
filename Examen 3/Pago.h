#pragma once

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class Pago
{
private:
	int monto;
	int fecha;
public:
	Pago(int monto, int fecha);
	~Pago();
	string toString();
};

