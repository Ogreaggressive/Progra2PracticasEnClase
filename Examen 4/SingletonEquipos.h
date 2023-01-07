#pragma once

#include "Equipo.h"
#include "ListaGenerica.h"
#include "ExceptionEquipoInexistente.h"

class SingletonEquipos
{
private:
	ListaGenerica<Equipo> equipos;
public:
	static SingletonEquipos& getInst();
	~SingletonEquipos();
	ListaGenerica<Equipo>& getSingletonEquipos();
	string toString();
	void registrar(string nombre);
	void ordenar();
	Equipo* buscar(string nombre);

private:
	SingletonEquipos();
};







