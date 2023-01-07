#include "Banco.h"

Banco::Banco()
{

}

Banco::~Banco()
{

}


string Banco::toString()
{
	stringstream ss;
	ss << "{cuentas:";
	ss << "[";
	ordenar();
	Nodo<Cuenta>* aux = cuentas.getPrimer();
	for (int i = 0; i < cuentas.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		aux = aux->getSiguiente();
		if (i != cuentas.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]";
	ss << ",transferencias:";
	ss << "[";
	if (transacciones.getTam() != 0)
	{
		ordenarTransferencias();
	}
	Nodo<Transaccion>* aux2 = transacciones.getPrimer();
	for (int i = 0; i < transacciones.getTam(); i++)
	{
		ss << aux2->getDato()->toString();
		aux2 = aux2->getSiguiente();
		if (i != transacciones.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void Banco::registrarCuenta(int id, string nombre, int saldo)
{
	Cuenta* c1 = new Cuenta(id,nombre,saldo);
	cuentas.registrar(c1);
}

void Banco::registrarTransaccion(int id,Retiro* r1)
{
	Transaccion* t1 = r1;
	Cuenta* c1 = new Cuenta(id);
	Cuenta* cuentaEncontrada = cuentas.buscar(c1);
	cuentaEncontrada->retirarDinero(t1);
}

void Banco::registrarTransaccion(int id, Deposito* r1)
{
	Transaccion* t1 = r1;
	Cuenta* c1 = new Cuenta(id);
	Cuenta* cuentaEncontrada = cuentas.buscar(c1);
	cuentaEncontrada->aumentarDinero(t1);
}

void Banco::ordenar()
{
	cuentas.ordenar(Cuenta::compNomAsc);
}

void Banco::ordenarTransferencias()
{
	transacciones.ordenar(Transaccion::cmpIdInverso);
}

void Banco::registrarTransferencia(int id1, int id2, int idTransaccion, int monto, int fecha)
{
	Cuenta* c1 = cuentas.buscar(new Cuenta(id1));
	Cuenta* c2 = cuentas.buscar(new Cuenta(id2));
	Transaccion* t1 = new Transferencia(c1,c2,idTransaccion,monto,fecha);
	//c1->retirarDinero(t1);
	//c2->aumentarDinero(t1);
	c1->pasarDinero(t1);
	c2->recibirDinero(t1);
	transacciones.registrar(t1);
}