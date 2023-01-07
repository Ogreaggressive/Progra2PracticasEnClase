#pragma once
#include "Vehiculo.h"

class Motocicleta :
    public Vehiculo
{
private:
    string tipo;

public:
    Motocicleta(string patente, string marca, int modelo, int km, string tipo);
    ~Motocicleta();
    void mostrar();
};

