#pragma once

#include "Padrino.h"
#include "Asistente.h"
#include "Voluntario.h"
#include "Lista.h"

class Voluntarios
{
private:
	Lista<Voluntario> voluntarios;
public:
	static Voluntarios& getInst();
	~Voluntarios();
	Lista<Voluntario>& getVoluntarios();
	string toString();
	void registrar(Asistente* p1);
	void registrar(Padrino* p1);
	void ordenar();
	Voluntario* buscar(int CI);

private:
	Voluntarios();
};







