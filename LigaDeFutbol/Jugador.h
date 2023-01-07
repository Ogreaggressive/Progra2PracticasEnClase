#pragma once

#include <iostream>
#include <string>
using namespace std;

class Jugador
{
private: //atributos privados (recomendacion)
	int ci;
	string nombre;
	long fono;
public: //comportamientos publicos (recomendacion)
	Jugador(); //Constructor
	Jugador(int ci, string nombre, long fono); //Constructor Copia
	~Jugador(); //Destructor
	void mostrar();
};

