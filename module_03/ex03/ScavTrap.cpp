#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "[ScavTrap] default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) {
	std::cout << "[ScavTrap] Constructor with parameters called." << std::endl;
	_name = name;
	_hp = 100;
	_ep = 50;
	_damage = 20;
}
ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_damage = other._damage;
}

ScavTrap &ScavTrap::operator=(ScavTrap &other) {
	std::cout << "[ScavTrap] Copy assignment operator called." << std::endl;
	if (this != &other){
		this->_name = other._name;
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_damage = other._damage;
	}
	return *this;
}
ScavTrap::~ScavTrap() {
	std::cout << "[ScavTrap] destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "[ScavTrap] have entered in Gate keeper mode" << std::endl;
}