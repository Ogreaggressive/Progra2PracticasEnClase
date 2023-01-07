// Examen 1 Ejercicio 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void reservar(int*** mat, int n)
{
    int aumento = 1, descenso = n;
    *mat = new int* [2*n];
    for (int i = 0; i < 2*n; i++)
    {
        if (i % 2 == 0)
        {
            (*mat)[i] = new int[aumento];
            aumento += 1;
        }
        else
        {
            (*mat)[i] = new int[descenso];
            descenso -= 1;
        }
    }
}

void llenarColumna(int* vec, int tam, int valorIni)
{
    for (int i = 0; i < tam; i++)
    {
        vec[i] = valorIni;
        valorIni++;
    }
}

void llenarColumnaInversa(int* vec, int tam, int valorIni)
{
    for (int i = 0; i < tam; i++)
    {
        vec[i] = valorIni;
        valorIni--;
    }
}

void llenarColumnaInferior(int** mat, int &tamano, int &aumento, int i, int n)
{
    if (i % 2 == 0 && i < n)
    {
        llenarColumna(mat[i], tamano, aumento);
        tamano += 1;
        aumento += 1;
    }
}

void llenarColumnaSuperior(int** mat, int& tamano, int& aumento, int i, int n)
{
    if (i % 2 != 0 && i >= n)
    {
        llenarColumna(mat[i], tamano - 1, aumento - 1);
        tamano -= 1;
        aumento -= 1;
    }
}


void llenarColumnaInversaInferior(int** mat, int& tamano, int& aumento, int i, int n)
{
    if (i % 2 != 0 && i < n)
    {
        llenarColumnaInversa(mat[i], tamano, aumento);
        tamano -= 1;
        aumento -= 1;
    }
}

void llenarColumnaInversaSuperior(int** mat, int& tamano, int& aumento, int i, int n)
{
    if (i % 2 == 0 && i >= n)
    {
        llenarColumnaInversa(mat[i], tamano + 1, aumento + 1);
        tamano += 1;
        aumento += 1;
    }
}


void llenarMatriz(int** mat, int n)
{
    int aumento = 1,tamano=1;
    int descuento = n, tamanoInv = n;
    for (int i = 0; i < 2*n; i++)
    {
        llenarColumnaInferior(mat,tamano,aumento,i,n);
        llenarColumnaInversaInferior(mat, tamanoInv, descuento, i, n);
        llenarColumnaSuperior(mat, tamano, aumento, i, n);
        llenarColumnaInversaSuperior(mat, tamanoInv, descuento, i, n);
    }
}

void mostrar(int** mat, int n)
{
    int aumento = 1,descenso=n+1,cambio=1;
    for (int i = 0; i < 2*n; i++)
    {
        
        for (int j = 0; j < cambio; j++)
        {
            cout << mat[i][j] << " ";
        }
        if (i % 2 != 0)
        {
            aumento += 1;
            cambio = aumento;
        }
        else
        {
            descenso -= 1;
            cambio = descenso;
        }
        cout << endl;
    }
}

void liberarMatriz(int** mat, int n)
{
    for (int i = 0; i < 2*n; i++)
    {
        delete[] mat[i];
    }

    delete[] mat;
}

int main()
{
    int n;
    int** mat;
    cout << "ingrese n" << endl;
    cin >> n;
    reservar(&mat, n);
    llenarMatriz(mat, n);
    mostrar(mat, n);
    liberarMatriz(mat, n);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
