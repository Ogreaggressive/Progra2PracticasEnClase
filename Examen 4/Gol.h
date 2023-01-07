#pragma once
#include "Evento.h"
class Gol :
    public Evento
{
private:
    Jugador* p1;
public:
    Gol(int minuto, string equipo, Jugador* p1);
    Gol(int codigo);
    ~Gol();
    void mostrar();
    string toString();
};

