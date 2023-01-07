#pragma once

#include <sstream>
#include <iostream>
using namespace std;

class SocioNoInscritoException: public exception
{
private:
	string mensaje;
public:
	SocioNoInscritoException(string nombre) {
		stringstream ss;
		ss << "El socio " << nombre << " no esta inscrito";
		mensaje = ss.str();
	}
	const char* what() const throw ()
	{
		return mensaje.c_str();
	}
};




