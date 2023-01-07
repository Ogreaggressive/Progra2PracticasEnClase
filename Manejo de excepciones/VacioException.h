#pragma once

#include <iostream>
using namespace std;

class VacioException: public exception
{
public:
	const char* what() const throw ()
	{
		return "no hay dato";
	}
};

