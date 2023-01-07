#pragma once
#include "Proyecto.h"

#define CANT_MAX_ELEMENTOS 10

class RedesSociales :
    public Proyecto
{
private:
    string elementosGraficos[CANT_MAX_ELEMENTOS];
    int ind;
public:
    RedesSociales(string codigo, string nombre, int fechaIni, int fechaFin, Cliente* cliente);
    ~RedesSociales();
    void registrarElemento(string elemento);
    void mostrar();
    void mostrarElementos();
};

