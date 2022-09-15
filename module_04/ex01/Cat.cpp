#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	_brain = new Brain;
	std::cout << "[Cat] Default constructor" << std::endl;
}

Cat::Cat(const Cat &other) {
		_type = other._type;
		_brain = new Brain;
	for (int i = 0; i < 100; ++i) {
		_brain[i] = other._brain[i];
	}
	std::cout << "[Cat] Copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other){
		delete _brain;
		this->_type = other._type;
		_brain = new Brain;
		for (int i = 0; i < 100; ++i) {
			_brain[i] = other._brain[i];
		}
		std::cout << "[Cat] Assignment operator" << std::endl;
	}
	return *this;
}
Cat::~Cat() {
	delete _brain;
	std::cout << "[Cat]  destructor" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}
