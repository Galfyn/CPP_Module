#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "[WrongCat] Default constructor" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "[WrongCat] Copy constructor" << std::endl;
		*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "[WrongCat] Assignment operator" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}
WrongCat::~WrongCat() {
	std::cout << "[WrongCat]  destructor" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}