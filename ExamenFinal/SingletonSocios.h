#pragma once

#include "Socio.h"
#include "ListaGenerica.h"

class SingletonSocios
{
private:
	ListaGenerica<Socio> socios;
public:
	static SingletonSocios& getInst();
	~SingletonSocios();
	ListaGenerica<Socio>* getSocios();
	string toString();
	void registrar(int ci, string nombre);
	void ordenar();
	Socio* buscar(int ci);

private:
	SingletonSocios();
};









