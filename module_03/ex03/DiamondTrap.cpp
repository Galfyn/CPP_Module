#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "[DiamondTrap] default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name): ClapTrap(std::string(name) + ("_clap_name")){
	std::cout << "[DiamondTrap] Constructor with parameters called." << std::endl;
	_name = name;
	_hp = FragTrap::_hp;
	_damage = FragTrap::_damage;
	_ep = ScavTrap::_ep;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	std::cout << "[DiamondTrap] Copy constructor called." << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	std::cout << "[DiamondTrap] Copy assignment operator called." << std::endl;
	if (this != &other){
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_damage = other._damage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "[DiamondTrap] Destructor called." << std::endl;

}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name : " << _name << std::endl;
	std::cout << "ClapTrap name : " << ClapTrap::_name << std::endl;
}
