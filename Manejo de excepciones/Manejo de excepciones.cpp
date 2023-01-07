

#include <iostream>
#include <string>

#include "ArrayGenerico.h"
#include "Persona.h"
#include "FueraDeRangoException.h"

using namespace std;

void test1()
{
	/*int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	try {
		if (d == 0) throw string("no se puede dividr por cero");
		int x = a / d;
		int y = b / d;
		int z = c / d;
		cout << "x:" << x << " y:" << y << " z:" << z << endl;
	}
	catch (string msgErr) {
		cout << msgErr << endl;
	}*/
}

int main()
{
	ArrayGenerico<Persona> personas(2);
	

	try {
		//personas.getTam();
		//personas.registrar(new Persona(1, "nicolas"));
		//personas.registrar(new Persona(1, "nicolas"));
		//personas.registrar(new Persona(1, "nicolas"));
		//personas.buscar(new Persona(21, "javi"));
		//Persona* p = personas[10];
		//p->mostrar();
		personas.registrar(new Persona(1, "nicolas"));
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}

