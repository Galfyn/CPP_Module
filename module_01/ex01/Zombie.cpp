#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name): _name(name) {}

Zombie::~Zombie() {
	std::cout << this->_name << ": Killed" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiinnnzzzZ" << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}