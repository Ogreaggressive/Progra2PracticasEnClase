#pragma once

template<class T>
class ArrayGenerico
{
private:
	T** datos;
	int ind;
	int tamMax;
public:
	ArrayGenerico(int tamMax);
	~ArrayGenerico();
	void registrar(T* dato);
	void mostrar(void (*mostrarT)(T*));
	T* buscar(T* dato);
	T* operator[](int i);
	void ordenar(bool (*funcComp)(T*, T*));
};

template<class T>
ArrayGenerico<T>::ArrayGenerico(int tamMax)
{
	datos = new T * [tamMax];
	this->tamMax = tamMax;
	ind = 0;
}

template<class T>
ArrayGenerico<T>::~ArrayGenerico()
{
	for (int i = 0; i < ind; i++)
	{
		delete datos[i];
	}
	delete[] datos;
}

template<class T>
void ArrayGenerico<T>::registrar(T* dato)
{
	if (ind < tamMax)
	{
		datos[ind] = dato;
		ind++;
	}
	/*else
	{
		cout << "error, limite excedido" << endl;
	}*/
}

template<class T>
void ArrayGenerico<T>::mostrar(void (*mostrarT)(T*))
{
	for (int i = 0; i < ind; i++)
	{
		(*mostrarT)(datos[i]);
	}
}

template<class T>
T* ArrayGenerico<T>::buscar(T* dato)
{
	for (int i = 0; i < ind; i++)
	{
		if (*datos[i] == dato)
		{
			return datos[i];
		}
	}
	//return NULL;
}


template<class T>
T* ArrayGenerico<T>::operator[](int i)
{
	return datos[i];
}

template<class T>
void intercambiar(T* a, T* b)
{
	T aux = *a;
	*a = *b;
	*b = aux;
}


template<class T>
void ArrayGenerico<T>::ordenar(bool (*funcComp)(T*,T*))
{
	for (int i = 0; i < ind; i++)
	{
		for (int j = i + 1; j < ind; j++)
		{

			if ((*funcComp)(datos[i], datos[j]))
			{
				intercambiar(&(datos[i]), &(datos[j]));
			}
		}
	}
}