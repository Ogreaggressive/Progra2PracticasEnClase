

#include "EmpresaPublicitaria.h"

#include "RedesSociales.h"
#include "EventoPublicitario.h"

#include "Simple.h"
#include "Compuesto.h"

void registrarProyectos()
{
    EmpresaPublicitaria cato(5);
    Cliente cliente1(1,"nicolas");
    Cliente cliente2(2, "raul");
    Cliente cliente3(3, "jose");
    cato.getModProyectos()->registrar("fa43","comer",111,222,&cliente1);
    cato.getModProyectos()->registrar("xba33", "trabajar", 111, 222, &cliente2);
    RedesSociales evento3 ("aaa11", "faisbuk", 111, 222, &cliente3);
    Proyecto* proyecto3 = &evento3;
    cato.getModProyectos()->aumentar(&evento3);
    cato.getModProyectos()->ordenarProyectoPorCodigo();
    cato.getModProyectos()->mostrar();
}

void registrarElementos()
{
    EmpresaPublicitaria cato(5);
    Cliente cliente3(3, "jose");
    RedesSociales evento3("aaa11", "faisbuk", 111, 222, &cliente3);
    evento3.registrarElemento("estudiar");
    evento3.registrarElemento("dormir");
    evento3.registrarElemento("pasar el examen");
    evento3.mostrar();
}

void registrarEquiposSimples()
{
    Cliente cliente3(3, "jose");
    EventoPublicitario evento3("aaa11", "faisbuk", 111, 222, &cliente3,"bolivia",5);
    evento3.getModEquiposElectronicos()->registrarSimple(1,"prueba1");
    evento3.getModEquiposElectronicos()->registrarSimple(2, "prueba2");
    evento3.getModEquiposElectronicos()->registrarSimple(3, "prueba3");
    evento3.mostrar();
    evento3.getModEquiposElectronicos()->mostrarSimples();
}

void registrarEquiposCompuestos()
{
    Cliente cliente3(3, "jose");
    EventoPublicitario evento3("aaa11", "faisbuk", 111, 222, &cliente3, "bolivia", 5);
    evento3.getModEquiposElectronicos()->registrarCompuesto(1, "prueba1");
    evento3.getModEquiposElectronicos()->registrarCompuesto(2, "prueba2");
    evento3.getModEquiposElectronicos()->registrarCompuesto(3, "prueba3");
    evento3.mostrar();
    evento3.getModEquiposElectronicos()->mostrarCompuestos();
}


int main()
{
    //registrarProyectos();
    //registrarElementos();
    //registrarEquiposSimples();
    //registrarEquiposCompuestos();
    return 0;
}


