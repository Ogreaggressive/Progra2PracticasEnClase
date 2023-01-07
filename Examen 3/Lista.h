#pragma once

#include "Nodo.h"

template<class T>
class Lista
{
private:
	Nodo<T>* primer;
	int tam;
public:
	Lista();
	~Lista();
	int getTam();
	Nodo<T>* getPrimer();
	void registrar(T* dato);
	void mostrar(void(*mostrarT)(T*));
	T* buscar(T* dato);
	void ordenar(bool (*funcComp)(T*, T*));
	T* operator[](int i);
	void ordenar2(bool (*funcComp)(T*, T*));
	void eliminar(T* dato);
};


template<class T>
Lista<T>::Lista()
{
	primer = NULL;
	tam = 0;
}

template<class T>
Lista<T>::~Lista()
{
}

template<class T>
int Lista<T>::getTam()
{
	return tam;
}

template<class T>
Nodo<T>* Lista<T>::getPrimer()
{
	return primer;
}

template<class T>
void Lista<T>::registrar(T* dato)
{
	if (primer == NULL)
	{
		primer = new Nodo<T>(dato);
	}
	else
	{
		Nodo<T>* aux = primer;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->crearSiguiente(dato);
	}
	tam++;
}

template<class T>
void Lista<T>::mostrar(void (*mostrarT)(T*))
{
	Nodo<T>* aux = primer;
	while (aux != NULL)
	{
		(*mostrarT)(aux->getDato());
		aux = aux->getSiguiente();
	}
}

template<class T>
T* Lista<T>::operator[](int i)
{
	Nodo<T>* aux = primer;
	for (int num = 0; num < i; num++)
	{
		aux = aux->getSiguiente();
	}
	return aux->getDato();
}

template<class T>
T* Lista<T>::buscar(T* dato)
{
	Nodo<T>* aux = primer;
	while (aux->getSiguiente() != NULL)
	{
		if (*(aux->getDato()) == dato)
		{
			return aux->getDato();
		}
		aux = aux->getSiguiente();
	}
	return NULL;
}

template<class T>
void Lista<T>::ordenar(bool (*funcComp)(T*, T*))
{
	Nodo<T>* aux = primer;
	Nodo<T>* auxSiguiente;
	T* dato;
	while (aux->getSiguiente() != NULL)
	{
		auxSiguiente = aux->getSiguiente();
		while (auxSiguiente != NULL)
		{
			if ((*funcComp)(aux->getDato(), auxSiguiente->getDato()))
			{
				dato = aux->getDato();
				aux->setDato(auxSiguiente->getDato());
				auxSiguiente->setDato(dato);
			}
			auxSiguiente = auxSiguiente->getSiguiente();
		}
		aux = aux->getSiguiente();
	}
}

template<class T>
void Lista<T>::eliminar(T* dato)
{
	if (primer != NULL)
	{
		Nodo<T>* aux_borrar;
		Nodo<T>* anterior = NULL;

		aux_borrar = primer;

		while ((aux_borrar != NULL) && !(*(aux_borrar->getDato()) == dato))
		{
			anterior = aux_borrar;
			aux_borrar = aux_borrar->getSiguiente();
		}
		if (aux_borrar == NULL)
		{
			cout << "elemento no encontrado" << endl;
		}
		else if (anterior == NULL)
		{
			primer = primer->getSiguiente();
			delete aux_borrar;
		}
		else
		{
			//anterior->getSiguiente() = aux_borrar->getSiguiente();
			anterior->crearSiguiente(aux_borrar->getSiguiente()->getDato());
			delete aux_borrar;
		}
	}
}






