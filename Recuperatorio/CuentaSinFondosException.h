#pragma once

#include <sstream>
#include <iostream>
using namespace std;

class CuentaSinFondosException : public exception
{
private:
	string mensaje;
public:
	CuentaSinFondosException(int num) {
		stringstream ss;
		ss << "Cuenta " << num << " sin fondos";
		mensaje = ss.str();
	}
	const char* what() const throw ()
	{
		return mensaje.c_str();
	}
};



