#include "EventoPublicitario.h"

EventoPublicitario::EventoPublicitario(string codigo, string nombre, int fechaIni, int fechaFin, Cliente* cliente, string lugar, int cantMaxEquipos) : Proyecto(codigo, nombre, fechaIni, fechaFin, cliente)
{
	this->lugar = lugar;
	equiposElectronicos = new ModEquiposElectronicos(cantMaxEquipos);
}

EventoPublicitario::~EventoPublicitario()
{

}

ModEquiposElectronicos* EventoPublicitario::getModEquiposElectronicos()
{
	return equiposElectronicos;
}

void EventoPublicitario::mostrar()
{
	Proyecto::mostrar();
	cout << "lugar: " << lugar << endl;
}

