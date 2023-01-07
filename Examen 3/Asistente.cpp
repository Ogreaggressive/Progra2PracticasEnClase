#include "Asistente.h"

Asistente::Asistente(int codigo, string nombre) : Voluntario(codigo, nombre)
{

}

Asistente::Asistente(int codigo) : Voluntario(codigo)
{

}

Asistente::~Asistente()
{

}

void Asistente::mostrar()
{
	cout << "---Asistente---" << endl;
	Voluntario::mostrar();
	//cout << "peso: " << peso << endl;
}

string Asistente::toString()
{
	stringstream ss;
	//ss << "{Asistente:{";
	ss << "{ci:" << codigo << ",nombre:" << nombre;
	ss << ",animales:[";
	for (int i = 0; i < animales.getTam(); i++)
	{
		ss << animales[i]->toString();
		if (i != animales.getTam() - 1)
		{
			ss << ',';
		}
	}
	ss << "]}";
	return ss.str();
}


void Asistente::asignarAnimal(int codigo)
{
	Animal* animalABuscar = new Ave(codigo);
	Animal* animalEncontrado = Animales::getInst().getAnimales().buscar(animalABuscar);
	if (animalEncontrado != NULL)
	{
		animales.registrar(animalEncontrado);
	}
}







