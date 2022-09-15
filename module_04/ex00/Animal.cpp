#include "Animal.hpp"

Animal::Animal(): _type("WrongAnimal") {
	std::cout << "[WrongAnimal] Default constructor" << std::endl;
}

Animal &Animal::operator =(const Animal &other) {
	std::cout << "[WrongAnimal] Assignment operator" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}
Animal::Animal(const Animal &other) {
	std::cout << "[WrongAnimal] Copy constructor" << std::endl;
		*this = other;
}
Animal::~Animal() {
	std::cout << "[WrongAnimal] Destructor" << std::endl;
}

void Animal::makeSound() const{
	std::cout << "[WrongAnimal] *the class cannot vote*" << std::endl;
}

std::string Animal::getType() const {
	return this->_type;
}