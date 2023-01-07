// Examen 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Campeonato.h"

Campeonato campeonato;

int pregunta1()
{
    cout << "----Pregunta 1----" << endl;
    string error;
    try {
        // Registramos equipo(nombre)
        campeonato.getEquipos().registrar("Wilstermann");
        // Registramos jugador(ci,nombre,fono) en equipo
        campeonato.getEquipos().buscar("Wilstermann")->registrarJugador(12, "leo", 12351);
        campeonato.getEquipos().buscar("Wilstermann")->registrarJugador(11, "rob", 12352);
        campeonato.getEquipos().buscar("Wilstermann")->registrarJugador(13, "fabi", 12353);
        campeonato.getEquipos().buscar("Wilstermann")->registrarJugador(14, "sebas", 12354);
        campeonato.getEquipos().buscar("Wilstermann")->registrarJugador(15, "josh", 12355);
        // Registramos equipo(nombre)
       campeonato.getEquipos().registrar("Aurora");
        // Registramos jugador(ci,nombre,fono) en equipo
        campeonato.getEquipos().buscar("Aurora")->registrarJugador(22, "juan", 12341);
        campeonato.getEquipos().buscar("Aurora")->registrarJugador(21, "jose", 12342);
        campeonato.getEquipos().buscar("Aurora")->registrarJugador(23, "pablo", 12343);
        campeonato.getEquipos().buscar("Aurora")->registrarJugador(24, "matias", 12344);
        campeonato.getEquipos().buscar("Aurora")->registrarJugador(25, "lucas", 12345);
    }
    catch (exception& e) {
        error = e.what();
    }
    string result = campeonato.getEquipos().toString();
    cout << result << endl;
    cout << error << endl;
    if (error == "" && result == "{equipos:[{nombre:Aurora,jugadores:[{ci:21,nombre:jose,fono:12342},{ci:22,nombre:juan,fono:12341},{ci:23,nombre:pablo,fono:12343},{ci:24,nombre:matias,fono:12344},{ci:25,nombre:lucas,fono:12345}]},{nombre:Wilstermann,jugadores:[{ci:11,nombre:rob,fono:12352},{ci:12,nombre:leo,fono:12351},{ci:13,nombre:fabi,fono:12353},{ci:14,nombre:sebas,fono:12354},{ci:15,nombre:josh,fono:12355}]}]}")
    {
        cout << "Resultado: correcto" << endl;
        return 20;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}

int pregunta2()
{
    cout << "----Pregunta 2----" << endl;
    string error;
    try {
        // Buscamos equipo
        Equipo* w = campeonato.getEquipos().buscar("Wilstermann");
        // Buscamos equipo
        Equipo* a = campeonato.getEquipos().buscar("Aurora");
        // Registramos equipo(id,local,visitante)
        campeonato.getPartidos().registrar(1, w, a);
        // Registramos equipo(id,local,visitante)
        campeonato.getPartidos().registrar(2, a, w);
    }
    catch (exception& e) {
        error = e.what();
    }
    string result = campeonato.getPartidos().toString();
    cout << result << endl;
    cout << error << endl;
    if (error == "" && result == "{partidos:[{id:1,local:{nombre:Wilstermann,jugadores:[{ci:11,nombre:rob,fono:12352},{ci:12,nombre:leo,fono:12351},{ci:13,nombre:fabi,fono:12353},{ci:14,nombre:sebas,fono:12354},{ci:15,nombre:josh,fono:12355}]},visitante:{nombre:Aurora,jugadores:[{ci:21,nombre:jose,fono:12342},{ci:22,nombre:juan,fono:12341},{ci:23,nombre:pablo,fono:12343},{ci:24,nombre:matias,fono:12344},{ci:25,nombre:lucas,fono:12345}]},eventos:[]},{id:2,local:{nombre:Aurora,jugadores:[{ci:21,nombre:jose,fono:12342},{ci:22,nombre:juan,fono:12341},{ci:23,nombre:pablo,fono:12343},{ci:24,nombre:matias,fono:12344},{ci:25,nombre:lucas,fono:12345}]},visitante:{nombre:Wilstermann,jugadores:[{ci:11,nombre:rob,fono:12352},{ci:12,nombre:leo,fono:12351},{ci:13,nombre:fabi,fono:12353},{ci:14,nombre:sebas,fono:12354},{ci:15,nombre:josh,fono:12355}]},eventos:[]}]}")
    {
        cout << "Resultado: correcto" << endl;
        return 20;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}

int pregunta3()
{
    cout << "----Pregunta 3----" << endl;
    string error;
    try {
        // Buscamos equipo
        Equipo* w = campeonato.getEquipos().buscar("Wilstermann");
        // Buscamos equipo
        Equipo* b = campeonato.getEquipos().buscar("Bolivar");
        // Registramos equipo(id,local,visitante)
        campeonato.getPartidos().registrar(3, w, b);
    }
    catch (exception& e) {
        error = e.what();
    }
    string result = campeonato.getPartidos().toString();
    cout << result << endl;
    cout << error << endl;
    if (error == "Equipo Bolivar inexistente" && result == "{partidos:[{id:1,local:{nombre:Wilstermann,jugadores:[{ci:11,nombre:rob,fono:12352},{ci:12,nombre:leo,fono:12351},{ci:13,nombre:fabi,fono:12353},{ci:14,nombre:sebas,fono:12354},{ci:15,nombre:josh,fono:12355}]},visitante:{nombre:Aurora,jugadores:[{ci:21,nombre:jose,fono:12342},{ci:22,nombre:juan,fono:12341},{ci:23,nombre:pablo,fono:12343},{ci:24,nombre:matias,fono:12344},{ci:25,nombre:lucas,fono:12345}]},eventos:[]},{id:2,local:{nombre:Aurora,jugadores:[{ci:21,nombre:jose,fono:12342},{ci:22,nombre:juan,fono:12341},{ci:23,nombre:pablo,fono:12343},{ci:24,nombre:matias,fono:12344},{ci:25,nombre:lucas,fono:12345}]},visitante:{nombre:Wilstermann,jugadores:[{ci:11,nombre:rob,fono:12352},{ci:12,nombre:leo,fono:12351},{ci:13,nombre:fabi,fono:12353},{ci:14,nombre:sebas,fono:12354},{ci:15,nombre:josh,fono:12355}]},eventos:[]}]}")
    {
        cout << "Resultado: correcto" << endl;
        return 20;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}

int pregunta4()
{
    cout << "----Pregunta 4----" << endl;
    string error;
    try {
        // Registramos Gol(minuto,equipo,ciJugador)
        campeonato.getPartidos().buscar(1)->gol(10, "Wilstermann", 12);
        // Registramos Gol(minuto,equipo,ciJugador)
        campeonato.getPartidos().buscar(1)->gol(12, "Aurora", 22);
        // Registramos Gol(minuto,equipo,ciJugador)
        campeonato.getPartidos().buscar(1)->gol(14, "Wilstermann", 13);
    }
    catch (exception& e) {
        error = e.what();
    }
    string result = campeonato.getPartidos().buscar(1)->toString();
    cout << result << endl;
    cout << error << endl;
    if (error == "" && result == "{id:1,local:{nombre:Wilstermann,jugadores:[{ci:11,nombre:rob,fono:12352},{ci:12,nombre:leo,fono:12351},{ci:13,nombre:fabi,fono:12353},{ci:14,nombre:sebas,fono:12354},{ci:15,nombre:josh,fono:12355}]},visitante:{nombre:Aurora,jugadores:[{ci:21,nombre:jose,fono:12342},{ci:22,nombre:juan,fono:12341},{ci:23,nombre:pablo,fono:12343},{ci:24,nombre:matias,fono:12344},{ci:25,nombre:lucas,fono:12345}]},eventos:[{tipo:gol,minuto:10,equipo:Wilstermann,jugador:leo},{tipo:gol,minuto:12,equipo:Aurora,jugador:juan},{tipo:gol,minuto:14,equipo:Wilstermann,jugador:fabi}]}")
    {
        cout << "Resultado: correcto" << endl;
        return 20;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}

int main()
{
    int nota = pregunta1() + pregunta2()+ pregunta3()+ pregunta4() /*+pregunta5() */ ;
    cout << endl;
    cout << "====================" << endl;
    cout << "===> NOTA: " << nota << "/100" << endl;
    cout << "====================" << endl;
    system("pause");
    return 0;
}

