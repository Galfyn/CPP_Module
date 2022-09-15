#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type){
	std::cout << "[AMateria] constructor with params is called." << std::endl;
}

AMateria::AMateria(const AMateria & other){
	*this = other;
	std::cout << "[AMateria] copy costructor is called." << std::endl;
}

AMateria::~AMateria() {
	std::cout << "[AMateria] destructor is called." << std::endl;
}

AMateria & AMateria::operator=(const AMateria & other){
	if (this != &other)
		_type = other._type;
	std::cout << "[AMateria] assignment operator is called." << std::endl;
	return *this;
}

std::string const & AMateria::getType() const{
	return (this->_type);
}

void AMateria::use (ICharacter & target){
	std::cout << target.getName() << std::endl;
}