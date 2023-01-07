#pragma once

#include <iostream>
using namespace std;

class YaRegistradoException : public exception
{
public:
	const char* what() const throw ()
	{
		return "este objeto ya ha sido registrado";
	}
};

