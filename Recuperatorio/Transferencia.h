#pragma once
#include "Transaccion.h"
#include "Cuenta.h"

class Transferencia :
    public Transaccion
{
private:
    Cuenta* cuentaOrigen;
    Cuenta* cuentaDestino;
public:
    Transferencia(Cuenta* cuentaOrigen,Cuenta* cuentaDestino,int id, int monto, int fecha);
    Transferencia(int codigo);
    ~Transferencia();
    void mostrar();
    string toString();
};






