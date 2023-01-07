#pragma once

#include "Partido.h"
#include "ListaGenerica.h"

class SingletonPartidos
{
private:
	ListaGenerica<Partido> partidos;
public:
	static SingletonPartidos& getInst();
	~SingletonPartidos();
	ListaGenerica<Partido>& getSingletonPartidos();
	string toString();
	void registrar(int id,Equipo* p1, Equipo* p2);
	void ordenar();
	Partido* buscar(int id);

private:
	SingletonPartidos();
};









