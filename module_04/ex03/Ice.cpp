#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	_type = "ice";
	std::cout << "[Ice] Default constructor" << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other._type) {
	*this = other;
	std::cout << "[Ice] Copy constructor" << std::endl;
}

Ice &Ice::operator=(const Ice &other) {
	if (this != &other)
		_type = other._type;
	std::cout << "[Ice] Copy assignment operator" << std::endl;
	return *this;
}

Ice::~Ice() {
	std::cout << "[Ice] Destructor";
}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "[Heals] " << target.getName() << std::endl;
}
