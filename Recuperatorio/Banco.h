#pragma once

#include "ListaGenerica.h"
#include "Transaccion.h"


#include "Cuenta.h"

#include "Retiro.h"
#include "Deposito.h"
#include "Transferencia.h"



class Banco
{
private:
	ListaGenerica<Cuenta> cuentas;
	ListaGenerica<Transaccion> transacciones;
public:
	Banco();
	~Banco();
	string toString();
	void ordenar();
	void ordenarTransferencias();
	void registrarCuenta(int id,string nombre,int saldo);
	void registrarTransaccion(int id,Retiro* r1);
	void registrarTransaccion(int id,Deposito* r1);
	void registrarTransferencia(int id1,int id2,int idTransaccion,int monto, int fecha);
};



