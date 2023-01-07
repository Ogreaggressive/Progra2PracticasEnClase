#pragma once

#include "Transaccion.h"
#include "ListaGenerica.h"

#include "CuentaSinFondosException.h"

#include "Retiro.h"
#include "Deposito.h"

class Cuenta
{
private:
	int id;
	string nombre;
	int saldo;
	ListaGenerica<Transaccion> transacciones;
public:
	Cuenta(int id, string nombre, int saldo);
	Cuenta(int id);
	~Cuenta();
	int getId();
	string getNombre();
	void mostrar();
	static void mostrar(Cuenta* Cuenta);
	bool operator==(Cuenta* Cuenta);
	static bool compIdAsc(Cuenta* p1, Cuenta* p2);
	static bool compNomAsc(Cuenta* p1, Cuenta* p2);
	string toString();
	string toStringDatos();
	void ordenar();
	void aumentarDinero(Transaccion* r1);
	void pasarDinero(Transaccion* r1);
	void recibirDinero(Transaccion* r1);
	void retirarDinero(Transaccion* r1);
};







