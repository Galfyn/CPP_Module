#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal") {
	std::cout << "[WrongAnimal] Default constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &other) {
	std::cout << "[WrongAnimal] Assignment operator" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "[WrongAnimal] Copy constructor" << std::endl;
		*this = other;
}
WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal] Destructor" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "[WrongAnimal] *the class cannot vote*" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}