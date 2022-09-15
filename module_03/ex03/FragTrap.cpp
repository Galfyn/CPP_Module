#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "[FragTrap] default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) {
	std::cout << "[FragTrap] Constructor with parameters called." << std::endl;
	_name = name;
	_ep = 100;
	_damage = 30;
}
FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "[FragTrap] Copy constructor called." << std::endl;
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_damage = other._damage;
}
FragTrap &FragTrap::operator=(FragTrap &other) {
	std::cout << "[FragTrap] Copy assignment operator called." << std::endl;
	if (this != &other){
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_damage = other._damage;
	}
	return *this;
}
FragTrap::~FragTrap() {
	std::cout << "[FragTrap] destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "[FragTrap] high fives!" << std::endl;
}