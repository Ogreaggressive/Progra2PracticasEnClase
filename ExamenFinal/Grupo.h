#pragma once

#include "SingletonSocios.h"

#include "ArrayGenerico.h"
#include "Sesion.h"

class Grupo
{
protected:
	string id;
	ListaGenerica<Socio> socios;
	ArrayGenerico<Socio> socios2;
public:
	Grupo(string id);
	~Grupo();
	void mostrar();
	static void mostrar(Grupo* Grupo);
	bool operator==(Grupo* Grupo);
	static bool cmpId(Grupo* p1, Grupo* p2);
	virtual string toString();
	virtual string toStringEnSubclases();
	void inscribir(int ci);
};



