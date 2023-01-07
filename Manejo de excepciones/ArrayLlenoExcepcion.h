#pragma once

#include <iostream>
using namespace std;

class ArrayLlenoExcepcion : public exception
{
public:
	const char* what() const throw ()
	{
		return "array lleno";
	}
};

