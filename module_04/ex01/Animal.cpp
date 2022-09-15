#include "Animal.hpp"

Animal::Animal(): _type("Animal") {
	std::cout << "[Animal] Default constructor" << std::endl;
}

Animal &Animal::operator =(const Animal &other) {
	std::cout << "[Animal] Assignment operator" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}
Animal::Animal(const Animal &other) {
	std::cout << "[Animal] Copy constructor" << std::endl;
		*this = other;
}
Animal::~Animal() {
	std::cout << "[Animal] Destructor" << std::endl;
}

void Animal::makeSound() const{
	std::cout << "[Animal] *the class cannot vote*" << std::endl;
}

std::string Animal::getType() const {
	return this->_type;
}