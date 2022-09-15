#pragma once

#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <cfloat>

class Conversion {
private:
	std::string _string;
	int 		_int;
	float 		_float;
	double 		_double;
public:
	Conversion(std::string str);
	Conversion(const Conversion &other);
	Conversion &operator=(const Conversion &other);
	~Conversion();

	bool literalChar(std::string str);
	bool literalInt(std::string str);
	bool literalFloat(std::string str);
	void literalDouble(std::string str);

	bool printChar(char c);
	bool printInt(int i);
	bool printFloat(float f);
	void printDouble(double d,std::string str);

};
