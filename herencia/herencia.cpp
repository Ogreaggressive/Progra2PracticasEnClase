#include "Camioneta.h"
#include "Motocicleta.h"

#include "Concesionaria.h"

#include "ArrayGenerico.h"

void ordenarVehiculo(Vehiculo* vehiculos[100],int ind)
{
    string patente1, patente2;
    Vehiculo* vehiculoPasar;
    for (int i = 0; i < ind; i++)
    {
        for (int j = i + 1; j < ind; j++)
        {
            patente1 = vehiculos[i]->getPatente();
            patente2 = vehiculos[j]->getPatente();
            if (patente1 > patente2)
            {
                vehiculoPasar = vehiculos[i];
                vehiculos[i] = vehiculos[j];
                vehiculos[j] = vehiculoPasar;
            }
        }
    }
}

void test1()
{
    Camioneta c1("x", "toyota", 2017, 1000, 2);
    c1.mostrar();
}


void test2()
{
    Camioneta c1("x","toyota",2017,1000,2);
    Vehiculo* v1 = &c1;
    v1->mostrar();
}

void test3()
{
    Motocicleta m1("x", "toyota", 2017, 1000, "campo");
    Vehiculo* v1 = &m1;
    v1->mostrar();
}

void test4() //para probar directo
{
    Vehiculo* vehiculos[3];
    vehiculos[0]=new Camioneta ("x", "toyota", 2017, 1000, 2);
    vehiculos[1] = new Camioneta("c", "toyota", 2017, 1000, 2);
    vehiculos[2] = new Motocicleta("a", "toyota", 2017, 1000, "campo");
    ordenarVehiculo(vehiculos,3);
    for (int i = 0; i < 3; i++)
    {
        vehiculos[i]->mostrar();
    }
}

void agregarVehiculo()
{
    Concesionaria concesionaria(10,10);
    Camioneta c1("x", "toyota", 2017, 1000, 2);
    Vehiculo* v1 = &c1;
    Motocicleta m1("a", "toyota", 2017, 1000, "campo");
    Vehiculo* v2 = &m1;
    concesionaria.getModVehiculos()->aumentar(v1);
    concesionaria.getModVehiculos()->aumentar(v2);
    concesionaria.getModVehiculos()->ordenarVehiculoAsignado();
    concesionaria.getModVehiculos()->mostrar();
}

void agregarVehiculo2()
{
    Concesionaria concesionaria(10,10);
    concesionaria.getModVehiculos()->registrar("x", "toyota", 2017, 1000);
    concesionaria.getModVehiculos()->registrar("y", "mitsubishi", 2020, 0);
    concesionaria.getModVehiculos()->registrar("z", "volvo", 2005, 200000);
    concesionaria.getModVehiculos()->ordenarVehiculoAsignado();
    concesionaria.getModVehiculos()->mostrar();
}

void pruebaVenta()
{
    Camioneta c1("x", "toyota", 2017, 1000, 2);
    Persona p1(1, "juan");
    Vehiculo* v1 = &c1;
    Venta venta1("abc12",10,v1,&p1);
    venta1.mostrar();
}

void agregarVenta()
{
    Concesionaria concesionaria(10, 10);
    Camioneta c1("x", "toyota", 2017, 1000, 2);
    Vehiculo* v1 = &c1;
    Persona p1(1, "juan");
    Motocicleta m1("a", "toyota", 2017, 1000, "campo");
    Vehiculo* v2 = &m1;
    Persona p2(2, "pedro");
    concesionaria.getModVentas()->registrar("abc12", 10, v1, &p1);
    concesionaria.getModVentas()->registrar("def34", 100, v2, &p2);
    concesionaria.getModVentas()->ordenar();
    concesionaria.getModVentas()->mostrar();
}

void VenderVehiculo()
{
    Concesionaria concesionaria(10, 10);
    Camioneta c1("x", "toyota", 2017, 1000, 2);
    Vehiculo* v1 = &c1;
    Motocicleta m1("a", "toyota", 2017, 1000, "campo");
    Vehiculo* v2 = &m1;
    Camioneta c2("f", "mitsubishi", 2005, 1000, 2);
    Vehiculo* v3 = &c2;
    Camioneta c3("f", "carrito", 2005, 1000, 2);
    Vehiculo* v4 = &c3;
    concesionaria.getModVehiculos()->aumentar(v1);
    concesionaria.getModVehiculos()->aumentar(v2);
    concesionaria.getModVehiculos()->aumentar(v3);
    concesionaria.getModVehiculos()->aumentar(v4);
    cout << "vehiculos disponibles antes de las ventas" << endl;
    concesionaria.getModVehiculos()->mostrar();
    Persona p1(1, "juan");
    Persona p2(2, "pedro");
    concesionaria.getModVentas()->registrar("abc12", 100, v1, &p1);
    concesionaria.getModVentas()->registrar("def34", 100, v2, &p2);
    concesionaria.getModVehiculos()->quitarStock(v1->getPatente());
    concesionaria.getModVehiculos()->quitarStock(v2->getPatente());
    cout << "vehiculos disponibles despues de las ventas" << endl;
    concesionaria.getModVehiculos()->mostrar();
}


//programacion generica
//funciones genericas
//clases genericas

/*
template<class T>
void intercambiar(T* a, T* b)
{
    T aux = *a;
    *a = *b;
    *b = aux;
}

template <class T>
void ordenarBurbuja(T* vect, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (vect[i] > vect[j])
            {
                intercambiar(&(vect[i]), &(vect[j]));
            }
        }
    }
}*/

void test1parte2()
{
    ArrayGenerico<Vehiculo> vehiculos(10);
    Camioneta* cam = new Camioneta("x", "toyota", 2017, 1000, 2);
    vehiculos.registrar(cam);
    vehiculos.mostrar(Vehiculo::mostrar);
}


void test2parte2()
{
    ArrayGenerico<Vehiculo> vehiculos(10);
    vehiculos.registrar(new Camioneta("x", "toyota", 2017, 1000, 2));
    vehiculos.mostrar(Vehiculo::mostrar);
}

//sobre carga de operadores
// -operadores: +,-,*,/,%,=,==,>=,<=,<,>,[],!
void testBuscar()
{
    ArrayGenerico<Vehiculo> vehiculos(10);
    Vehiculo* v1 = new Camioneta("x", "toyota", 2017, 1000, 2);
    Vehiculo* v2 = new Camioneta("x", "toyota", 2017, 1000, 2);
    if (*v1 == v2)
    {
        cout << "iguales" << endl;
    }
    else
    {
        cout << "direfentes" << endl;
    }  
}

void test3parte2()
{
    ArrayGenerico<Vehiculo> vehiculos(10);
    Camioneta* cam = new Camioneta("x", "toyota", 2017, 1000, 2);
    vehiculos.registrar(cam);
    vehiculos[0]->mostrar();
}


void test4parte2()
{
    ArrayGenerico<Vehiculo> vehiculos(10);
    Camioneta* c1 = new Camioneta("x", "toyota", 2017, 1000, 2);
    Camioneta* c2 = new Camioneta("x", "toyota", 2017, 1000, 2);
    vehiculos.registrar(c1);
    Vehiculo* v1 = vehiculos.buscar(c2);
    v1->mostrar();
}

void test5parte2()
{
    ArrayGenerico<Vehiculo> vehiculos(10);
    Camioneta* c1 = new Camioneta("xa", "toyota", 2017, 1000, 2);
    vehiculos.registrar(c1);
    Vehiculo c2("xa");
    Vehiculo* v1 = vehiculos.buscar(&c2);
    v1->mostrar();
}

void test6parte2()
{
    ArrayGenerico<Vehiculo> vehiculos(10);
    Camioneta* c1 = new Camioneta("d", "toyota", 2017, 1000, 2);
    Camioneta* c2 = new Camioneta("c", "toyota", 2017, 1000, 2);
    Camioneta* c3 = new Camioneta("b", "toyota", 2017, 1000, 2);
    Camioneta* c4 = new Camioneta("a", "toyota", 2017, 1000, 2);
    vehiculos.registrar(c1);
    vehiculos.registrar(c2);
    vehiculos.registrar(c3);
    vehiculos.registrar(c4);
    vehiculos.ordenar(Vehiculo::compPatAsc);
    vehiculos.mostrar(Vehiculo::mostrar);
    vehiculos.ordenar(Vehiculo::compPatDes);
    vehiculos.mostrar(Vehiculo::mostrar);
}


int main()
{
    //test4();
    //agregarVehiculo();
    //pruebaVenta();
    //agregarVenta();
    //VenderVehiculo();

    /*double x = 3, y = 6;
    intercambiar<double>(&x, &y);
    int q = 4, p = 5;
    intercambiar<int>(&q, &p);

    int vect[] = { 3,2,5,1,4 };
    ordenarBurbuja<int>(vect, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << vect[i] << endl;
    }*/

    //testArray();
   // test1parte2();
    //test2parte2();
    //testBuscar();
    //test3parte2();
    //test4parte2();
    test6parte2;

    return 0;
}
