#pragma once

#include <sstream>
#include <iostream>
using namespace std;

class ExceptionEquipoInexistente : public exception
{
private:
	string mensaje;
public:
	ExceptionEquipoInexistente(string equipo) {
		stringstream ss;
		ss << "Equipo " << equipo << " inexistente";
		mensaje = ss.str();
	}
	const char* what() const throw ()
	{
		return mensaje.c_str();
	}
};


