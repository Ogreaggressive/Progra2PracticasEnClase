#pragma once

#include "Voluntario.h"
#include "Animal.h"
#include "Animales.h"
#include "Ave.h"

class Asistente :
    public Voluntario
{
private:
    Lista<Animal> animales;
public:
    Asistente(int codigo, string nombre);
    Asistente(int codigo);
    ~Asistente();
    void mostrar();
    string toString();
    void asignarAnimal(int codigo);
};









