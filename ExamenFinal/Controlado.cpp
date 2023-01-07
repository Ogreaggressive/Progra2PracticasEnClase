#include "Controlado.h"

Controlado::Controlado(string id) : Grupo(id)
{
}


Controlado::~Controlado()
{

}

void Controlado::mostrar()
{
	cout << "---Controlado---" << endl;
	//cout << "peso: " << peso << endl;
}

string Controlado::toString()
{
	stringstream ss;
	ss<<Grupo::toStringEnSubclases();
	ss << ",sesiones:[";
	Nodo<Sesion>* aux = sesiones.getPrimer();

	for (int i = 0; i < sesiones.getTam(); i++)
	{
		ss << aux->getDato()->toString();
		if (i != sesiones.getTam() - 1)
		{
			aux = aux->getSiguiente();
		}
		if (i != sesiones.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}

void Controlado::registrarSesion(int ci)
{
	sesiones.registrar(new Sesion(ci));
}


void Controlado::registrarAsistente(int ci, int fecha)
{
	if (socios.buscar(new Socio(ci)) == NULL)
	{
		Socio* noInscrito = SingletonSocios::getInst().buscar(ci);
		throw SocioNoInscritoException(noInscrito->getNombre());
	}
	sesiones.buscar(new Sesion(fecha))->registrar(ci);
}









