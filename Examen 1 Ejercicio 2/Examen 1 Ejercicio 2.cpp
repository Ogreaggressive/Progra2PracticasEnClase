// Examen 1 Ejercicio 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Taller.h"

void registrarMecanicos(Taller &taller1, int n)
{
    int ci;
    string nombre;
    for (int i = 0; i < n; i++)
    {
        cout << "carnet de identidad" << endl;
        cin >> ci;
        cout << "nombre" << endl;
        cin >> nombre;
        taller1.agregarMecanico(ci,nombre);
    }
}

void registrarVehiculos(Taller &taller1, int n)
{
    int ci;
    int propietarioCI;
    for (int i = 0; i < n; i++)
    {
        cout << "carnet de identidad" << endl;
        cin >> ci;
        cout << "carnet de identidad del propietario" << endl;
        cin >> propietarioCI;
        taller1.agregarVehiculo(ci,propietarioCI);
    }
}

int main()
{
    int n;
    Taller taller1 = Taller("Taller");
    cout << "elige cuantos mecanicos y autos quieres registrar" << endl;
    cin>> n;
    cout << "mecanicos" << endl;
    registrarMecanicos(taller1,n);
    cout << "vehiculos" << endl;
    registrarVehiculos(taller1,n);
    taller1.mostrar();

    return 0;
}

