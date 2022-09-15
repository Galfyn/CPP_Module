#include "Dog.hpp"

Dog::Dog(){
	_type = "Dog";
	_brain = new Brain;
	std::cout << "[Dog] Default constructor" << std::endl;
}

Dog::Dog(const Dog &other) {
		_type = other._type;
		_brain = new Brain;
	for (int i = 0; i < 100; ++i) {
		_brain[i] = other._brain[i];
	}
	std::cout << "[Dog] Copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other){
		delete _brain;
		_type = other._type;
		_brain = new Brain;
		for (int i = 0; i < 100; ++i) {
			_brain[i] = other._brain[i];
		}
		std::cout << "[Dog] Assignment operator" << std::endl;
	}
	return *this;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "[Dog] Destructor" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Gaaw Gaaw" << std::endl;
}
