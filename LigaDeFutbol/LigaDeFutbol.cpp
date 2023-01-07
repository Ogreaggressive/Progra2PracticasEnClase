#include <iostream>
#include "Campeonato.h"

void test1()
{
    cout << "inicia test 1" << endl;
    Jugador jugador1;
    cout << "finaliza test 1" << endl;
}

void test2()
{
    cout << "inicia test 2" << endl;
    Jugador jugador1(12345,"juan",66541332);
    cout << "finaliza test 2" << endl;
}

void test3()
{
    cout << "inicia test 3" << endl;
    Jugador jugador1(12345, "juan", 66541332);
    jugador1.mostrar();
    cout << "finaliza test 3" << endl;
}

void test4()
{
    //constructor por defecto
    //tienes un tamaño fijo de array
    Jugador jugadores[3]; //array con 3 objetos
    jugadores[0].mostrar();
}

void test5()
{
    //constructor sobrecargado
    //tienes un tamaño fijo de array
    Jugador* jugadores[3]; //array con 3 punteros
    jugadores[0] = new Jugador(12345, "juan", 66541332);
    //(*jugadores[0]).mostrar();
    jugadores[0]->mostrar();
}

void test6()
{
    //constructor por defecto
    //tienes un tamaño variable de array
    Jugador* jugadores = new Jugador[3]; //array con 3 objetos
    jugadores[0].mostrar();
}

void test7()
{
    //constructor sobrecargado
    //tienes un tamaño variable de array
    Jugador** jugadores = new Jugador*[3]; //array con 3 punteros
    jugadores[0] = new Jugador(12345, "juan", 66541332);
    //(*jugadores[0]).mostrar();
    jugadores[0]->mostrar();
}

void test8()
{
    Equipo equipo("Bolivar");
    equipo.registrarJugador(12345, "juan", 66541332);
    equipo.registrarJugador(12345, "pedro", 66541332);
    equipo.registrarJugador(12345, "messi", 66541332);
    equipo.mostrar();

}

void test9()
{
    Equipo equipo("Bolivar");
    equipo.setNombre("Bolivar");
    cout << equipo.getNombre() << endl;
}

void test10()
{
    Campeonato ifpb("ifpb");
    ifpb.getModuloEquipos().registrar("Wilstermann");
    ifpb.getModuloEquipos().registrar("Bolivar");
    ifpb.getModuloEquipos().mostrar();
}

void test11()
{
    Campeonato lfpb("lfpb");
    lfpb.getModuloEquipos().registrar("Wilstermann");
    lfpb.getModuloEquipos().buscar("Wilstermann")->registrarJugador(12345, "messi", 66541332);
}

void test12()
{
    Campeonato lfpb("lfpb");
    lfpb.getModuloEquipos().registrar("Wilstermann");
    lfpb.getModuloEquipos().registrar("Bolivar");
    Equipo* w = lfpb.getModuloEquipos().buscar("Wilstermann");
    Equipo* b = lfpb.getModuloEquipos().buscar("Bolivar");

    lfpb.getModuloPartidos().registrar(20210101, w,b);
}

int main()
{
    test8();

    return 0;
}

