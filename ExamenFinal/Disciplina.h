#pragma once

#include "ListaGenerica.h"
#include "Grupo.h"


class Disciplina
{
private:
	string nombre;
	ListaGenerica<Grupo> grupos;
public:
	Disciplina(string nombre);
	~Disciplina();
	string getNombre();
	void mostrar();
	static void mostrar(Disciplina* Disciplina);
	bool operator==(Disciplina* Disciplina);
	static bool compNomAsc(Disciplina* p1, Disciplina* p2);
	string toString();
	ListaGenerica<Grupo>* getGrupos();
};







