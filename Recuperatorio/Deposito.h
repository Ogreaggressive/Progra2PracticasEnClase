#pragma once
#include "Transaccion.h"
class Deposito :
    public Transaccion
{
private:

public:
    Deposito(int id, int monto, int fecha);
    Deposito(int codigo);
    ~Deposito();
    void mostrar();
    string toString();
};





