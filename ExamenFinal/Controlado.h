#pragma once
#include "Grupo.h"
#include "SocioNoInscritoException.h"
class Controlado :
    public Grupo
{
private:
    ListaGenerica<Sesion> sesiones;
public:
    Controlado(string id);
    ~Controlado();
    void mostrar();
    string toString();
    void registrarSesion(int fecha);
    void registrarAsistente(int ci, int fecha);
};

