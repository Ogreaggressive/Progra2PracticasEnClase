#pragma once
#include "Proyecto.h"
#include "ModEquiposElectronicos.h"


class EventoPublicitario :
    public Proyecto
{
private:
    string lugar;
    ModEquiposElectronicos* equiposElectronicos;
    int cantMaxEquipos;
public:
    EventoPublicitario(string codigo, string nombre, int fechaIni, int fechaFin, Cliente* cliente, string lugar, int cantMaxEquipos);
    ~EventoPublicitario();
    ModEquiposElectronicos* getModEquiposElectronicos();
    void mostrar();
};

