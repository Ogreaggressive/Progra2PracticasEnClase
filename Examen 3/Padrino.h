#pragma once

#include "Voluntario.h"
#include "Pago.h"

class Padrino :
    public Voluntario
{
private:
    Lista<Pago> pagos;
public:
    Padrino(int codigo, string nombre);
    Padrino(int codigo);
    ~Padrino();
    void mostrar();
    string toString();
    void realizarPago(Pago* pago);
};







