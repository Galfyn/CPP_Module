#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	_type = "cure";
	std::cout << "[Cure] Default constructor" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other._type) {
	*this = other;
	std::cout << "[Cure] Copy constructor" << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
	if (this != &other)
		_type = other._type;
	std::cout << "[Cure] Copy assignment operator" << std::endl;
	return *this;
}

Cure::~Cure() {
	std::cout << "[Cure] Destructor";
}

AMateria *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "[Heals] " << target.getName() << std::endl;
}
