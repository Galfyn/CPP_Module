#include "Dog.hpp"

Dog::Dog(){
	std::cout << "[Dog] Default constructor" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &other) {
	std::cout << "[Dog] Copy constructor" << std::endl;
		*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "[Dog] Assignment operator" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Dog::~Dog() {
	std::cout << "[Dog] Destructor" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Gaaw Gaaw" << std::endl;
}