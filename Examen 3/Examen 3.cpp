
#include "Lista.h"

#include "Animal.h"
#include "Ave.h"
#include "Felino.h"

#include "Asistente.h"
#include "Padrino.h"
#include "Voluntario.h"

#include "Animales.h"
#include "Voluntarios.h"

int pregunta1()
{
    cout << "----Pregunta 1----" << endl;
    //Instancia de lista enlazada genérica
    Lista<Animal> animales;
    // Ave(codigo,especie,edad,aerea?)
    animales.registrar(new Ave(3, "Condor", 2, true));
    animales.registrar(new Ave(2, "Avestruz", 1, false));
    // Felino(codigo,especie,edad,peso)
    animales.registrar(new Felino(1, "Tigre", 5, 20));
    animales.ordenar(Animal::cmpCodigo);
    string result = animales[0]->toString();
    cout << result << endl;
    if (result == "{Felino:{codigo:1,especie:Tigre,edad:5},peso:20}")
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
    // Ave(codigo,especie,edad,aerea?)
    Animales::getInst().registrar(3, "Condor", 2, true);
    Animales::getInst().registrar(2, "Avestruz", 1, false);
    // Felino(codigo,especie,edad,peso)
    Animales::getInst().registrar(1, "Tigre", 5, 20);
    string result = Animales::getInst().toString();
    cout << result << endl;
    if (result == "{animales:[{Felino:{codigo:1,especie:Tigre,edad:5},peso:20},{Ave:{codigo:2,especie:Avestruz,edad:1},tipo:terrestre},{Ave:{codigo:3,especie:Condor,edad:2},tipo:aerea}]}")
    {
        cout << "Resultado: correcto" << endl;
        return 30;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}

int pregunta3()
{
    cout << "----Pregunta 3----" << endl;
    //Registra voluntarios(ci,nombre)
    Padrino* v1 = new Padrino(12346, "Juan");
    Asistente* v2 = new Asistente(12345, "Pedro");
    Padrino* v3 = new Padrino(12344, "Jose");
    Voluntarios::getInst().registrar(v1);
    Voluntarios::getInst().registrar(v2);
    Voluntarios::getInst().registrar(v3);
    //Padrinos realizan pagos
    v1->realizarPago(new Pago(200, 20210101));
    v1->realizarPago(new Pago(300, 20210201));
    v3->realizarPago(new Pago(100, 20210201));
    //Se asigna animales a asistente
    v2->asignarAnimal(1);
    v2->asignarAnimal(2);
    string result = Voluntarios::getInst().toString();
    cout << result << endl;
    if (result == "{voluntarios:[{ci:12344,nombre:Jose,pagos:[{monto:100,fecha:20210201}]},{ci:12346,nombre:Juan,pagos:[{monto:200,fecha:20210101},{monto:300,fecha:20210201}]},{ci:12345,nombre:Pedro,animales:[{Felino:{codigo:1,especie:Tigre,edad:5},peso:20},{Ave:{codigo:2,especie:Avestruz,edad:1},tipo:terrestre}]}]}")
    {
        cout << "Resultado: correcto" << endl;
        return 50;
    }
    cout << "Resultado: incorrecto" << endl;
    return 0;
}


int main()
{
    int nota = pregunta1() + pregunta2() + pregunta3();
    cout << endl;
    cout << "====================" << endl;
    cout << "===> NOTA: " << nota << "/100" << endl;
    cout << "====================" << endl;
    system("pause");
    return 0;
}

