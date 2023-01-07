#pragma once

#include "Animal.h"

class Ave :
    public Animal
{
private:
    bool vuela;
public:
    Ave(int codigo, string especie, int edad, bool vuela);
    Ave(int codigo);
    ~Ave();
    void mostrar();
    string toString();
};





