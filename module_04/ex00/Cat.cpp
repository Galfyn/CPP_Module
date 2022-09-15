#include "Cat.hpp"

Cat::Cat() {
	std::cout << "[Cat] Default constructor" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &other) {
	std::cout << "[Cat] Copy constructor" << std::endl;
		*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "[Cat] Assignment operator" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}
Cat::~Cat() {
	std::cout << "[Cat]  destructor" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}