#include "Conversion.hpp"

Conversion::Conversion(std::string str): _string(str) {
	if (literalChar(str))
		return;
	if (literalInt(str))
		return;
	if (literalFloat(str))
		return;
	literalDouble(str);
	std::cout << "[Conversion] Default constructor." << std::endl;
}

Conversion::Conversion(const Conversion &other) {
	_string = other._string;
	std::cout << "[Conversion] Copy constructor." << std::endl;
}

Conversion &Conversion::operator=(const Conversion &other) {
	if (this != &other)
		_string = other._string;
	std::cout << "[Conversion] Assingnment operator." << std::endl;
	return *this;
}

Conversion::~Conversion() {
	std::cout << "[Conversion] Destructor." << std::endl;
}

bool Conversion::literalChar(std::string str) {
	if (str.length() == 1 && !isdigit(str[0]))
		return printChar(str[0]);
	else
		return false;
}

bool Conversion::literalInt(std::string str) {
	try {
		const char *buf = str.data();
		if (str[0] != '-' && str[0] != '+' && !isdigit(str[0]))
			return false;
		if (str.find(".", 0) != std::string::npos || str.find("f", 0) != std::string::npos)
			return false;
		if (std::strtod(buf, 0) > INT_MAX || strtod(buf, 0) < INT_MIN)
			return false;
		_int = std::stoi(str);
		printInt(_int);
	}
	catch (std::exception &ex) {
		std::cout << "INT: " << ex.what() << std::endl;
	}
	return true;
}

bool Conversion::literalFloat(std::string str) {
	try {
		const char *buf = str.data();
		if (str.find("f", 0) == std::string::npos)
			return false;
		_float = static_cast<float>(strtof(buf, 0));
		printFloat(_float);
	}
	catch (std::exception &ex){
		std::cout << "FLOAT: " << ex.what() << std::endl;
	}
	return true;
}

void Conversion::literalDouble(std::string str) {
	try {
		const char *buf = str.data();
		_double = strtod(buf, 0);
		printDouble(_double, str);
	}
	catch (std::exception &ex){
		std::cout << "DOUBLE: " << ex.what() << std::endl;
	}
}

bool Conversion::printChar(char c) {
	if (std::isprint(c))
		std::cout << "char: \t" << c <<  std::endl;
	else
		std::cout << "char: \t"  << "Non displayable" << std::endl;

	std::cout << "int: \t" 	 << static_cast<int>(c) << std::endl;
	std::cout << "float: \t" << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: "  << static_cast<double>(c) << ".0" << std::endl;
	return true;
}

bool Conversion::printInt(int i) {
	if (std::isprint(i))
		std::cout << "char: \t" << static_cast<char>(i) << std::endl;
	else if(i <= CHAR_MAX && i >= CHAR_MIN)
		std::cout << "char: \t" << "Non displayable" << std::endl;
	else
		std::cout << "char: \t" << "impossible" << std::endl;
	std::cout << "int: \t"  << i << std::endl;
	std::cout << "float \t" << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
	return true;
}

bool Conversion::printFloat(float f) {
	if (std::isprint((int)f))
		std::cout  << "char: \t"  << static_cast<char>(f) << std::endl;
	else if((int)f <= CHAR_MAX && (int)f >= CHAR_MIN)
		std::cout  << "char: \t"  << "Non displayable" << std::endl;
	else
		std::cout  << "char: \t"  << "impossible" << std::endl;
	if (static_cast<long int>(f) > INT_MAX || static_cast<long int>(f) < INT_MIN)
		std::cout  << "int: \t"  << "impossible"  << std::endl;
	else
		std::cout  << "int: \t"  << static_cast<int>(f) << std::endl;
	std::cout  << "float \t"  << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
	std::cout  << "double: "  << static_cast<double>(f) << std::endl;
	return true;
}

void Conversion::printDouble(double d, std::string str) {
	if (std::isprint((int)d))
		std::cout  << "char: \t"  << static_cast<char>(d)  << std::endl;
	else if((int)d <= CHAR_MAX && (int)d >= CHAR_MIN)
		std::cout  << "char: \t"  << "Non displayable"  << std::endl;
	else
		std::cout  << "char: \t"  << "impossible"  << std::endl;
	if (static_cast<long int>(d) > INT_MAX || static_cast<long int>(d) < INT_MIN)
		std::cout  << "int: \t"  << "impossible"  << std::endl;
	else if (str == "nan")
		std::cout  << "int: \t"  << "impossible"  << std::endl;
	else
		std::cout  << "int: \t"  << static_cast<int>(d)  << std::endl;
	if (d > FLT_MAX || d < FLT_MIN)
		std::cout  << "float: \t"  << "impossible"  << std::endl;
	else
		std::cout  << "float \t"  << std::fixed << std::setprecision(1)
				  << static_cast<float>(d) << "f"  << std::endl;
	std::cout  << "double: "  << d  << std::endl;
}