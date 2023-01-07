#pragma once

//#include <iostream>
//#include <string>

template<class T>
class MatrizGenerica
{
private:
	T** datos; //Persona***
	int filas;
	int cols;
public:
	MatrizGenerica(int filas, int cols);
	~MatrizGenerica();
	void registrar(T dato, int fila, int col); //persona*
	void mostrar(void (*mostrarT)(T)); //persona*
	T* buscar(T dato);
	T* operator[](int fila);
};

template<class T>
MatrizGenerica<T>::MatrizGenerica(int filas, int cols)
{
	datos = new T * [filas];
	for (int i = 0; i < filas; i++)
	{
		datos[i] = new T[cols];
	}
	this->filas = filas;
	this->cols = cols;
}

template<class T>
MatrizGenerica<T>::~MatrizGenerica()
{
	for (int i = 0; i < filas; i++)
	{
		delete[] datos[i];
	}
	delete[] datos;
}


template<class T>
void MatrizGenerica<T>::registrar(T dato, int fila,int col)
{
	if (fila < filas && col < cols)
	{
		datos[fila][col] = dato;
	}
	/*else
	{
		cout << "error, limite excedido" << endl;
	}*/
}


template<class T>
void MatrizGenerica<T>::mostrar(void (*mostrarT)(T))
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < filas; j++)
		{
			(*mostrarT)(datos[i][j]);
		}
	}
}
/*
template<class T>
T* MatrizGenerica<T>::buscar(T* dato)
{
	for (int i = 0; i < ind; i++)
	{
		if (*datos[i] == *dato)
		{
			return datos[i];
		}
	}
	return NULL;
}

*/
template<class T>
T* MatrizGenerica<T>::operator[](int fila)
{
	return datos[fila];
}

