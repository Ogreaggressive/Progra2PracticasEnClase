
#include "Taller.h"

void test1()
{
    Taller abc(10,10,10);
    abc.getModMecanicos()->registrar(1, "juan");
    abc.getModMecanicos()->registrar(2, "pablo");
    abc.getModMecanicos()->mostrar();
    abc.getModVehiculos()->registrar("abcd",1, "juan");
    abc.getModVehiculos()->registrar("comer",2, "pablo");
    abc.getModVehiculos()->mostrar();
    abc.getModMantenimientos()->registrar(20211202, "xyz", abc.getModMecanicos()->buscar(1), abc.getModVehiculos()->buscar("abcd"));
    abc.getModMantenimientos()->mostrar();
}


int main()
{
    test1();
    return 0;
}


