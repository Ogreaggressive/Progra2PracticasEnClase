#pragma once

#include "ModMecanicos.h"
#include "ModVehiculos.h"
#include "modMantenimientos.h"

class Taller
{
private:
	ModMecanicos* modMecanicos;
	ModVehiculos* modVehiculos;
	ModMantenimientos* modMantenimientos;
public:
	Taller(int cantMaxMec, int cantMaxVeh, int cantMaxMan);
	~Taller();
	ModMecanicos* getModMecanicos(); 
	ModVehiculos* getModVehiculos();
	ModMantenimientos* getModMantenimientos();
};

