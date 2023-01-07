#include "Taller.h"

Taller::Taller(int cantMaxMec, int cantMaxVeh,int cantMaxMan)
{
	modMecanicos = new ModMecanicos(cantMaxMec);
	modVehiculos = new ModVehiculos(cantMaxVeh);
	modMantenimientos = new ModMantenimientos(cantMaxMan);
}

Taller::~Taller()
{
}

ModMecanicos* Taller::getModMecanicos()
{
	return modMecanicos;
}

ModVehiculos* Taller::getModVehiculos()
{
	return modVehiculos;
}

ModMantenimientos* Taller::getModMantenimientos()
{
	return modMantenimientos;
}

