#pragma once
#include "Transaccion.h"
class Retiro :
    public Transaccion
{
private:

public:
    Retiro(int id, int monto, int fecha);
    Retiro(int codigo);
    ~Retiro();
    void mostrar();
    string toString();
};



