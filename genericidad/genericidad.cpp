
#include "Cliente.h"
#include "MatrizGenerica.h"

void test1()
{
	MatrizGenerica<int> enteros(3, 3);
	enteros[0][0] = 10;
	cout << enteros[0][0];

}

void test2()
{
	MatrizGenerica<Cliente*> salaCine(10, 10);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			salaCine[i][j] = NULL;
		}
	}
	Cliente* c1 = new Cliente(1, "nicolas");
	salaCine.registrar(c1,0,0);
	//salaCine[0][0]->mostrar();
	salaCine.mostrar(Cliente::mostrar);
}

/*
void test2()
{
	MatrizGenerica<Cliente> salaCine(10,10);
	salaCine.registrar(new Cliente(1,"nicolas"),1,2);
	salaCine.registrar(new Cliente(2, "juan"),1,1);
	salaCine.registrar(new Cliente(3, "pedro"),2,2);
	//salaCine.mostrar(Cliente::mostrar);
}*/


int main()
{
	test2();
	return 0;
}
