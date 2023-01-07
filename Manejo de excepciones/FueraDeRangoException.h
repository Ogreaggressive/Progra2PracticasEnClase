#pragma once

#include <iostream>
using namespace std;

class FueraDeRangoException : public exception
{
public:
	const char* what() const throw ()
	{
		return "indice fuera de rango";
	}
};

