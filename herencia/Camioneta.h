#pragma once
#include "Vehiculo.h"
class Camioneta :
    public Vehiculo
{
private:
    int capMax;
public:
    Camioneta(string patente, string marca, int modelo, int km, int capMax);
    ~Camioneta();
    void mostrar();
};

