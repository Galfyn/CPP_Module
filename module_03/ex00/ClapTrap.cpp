#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_hp(10), _ep(10), _damage(10) {
	std::cout << "Default constructor called" << std::endl;
	}
ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _damage(10) {
	std::cout << "Constructor with parameters called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor called" << std::endl;
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_damage = other._damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &other){
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_damage = other._damage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName() {
	return _name;
}

unsigned int ClapTrap::getHp() {
	return _hp;
}

unsigned int ClapTrap::getEp() {
	return _ep;
}

unsigned int ClapTrap::getDamage() {
	return _damage;
}


void ClapTrap::attack(const std::string &target) {
	if (_hp > 0 && _ep > 0){
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
		_ep--;
	}
	else if (_hp == 0)
		std::cout << "ClapTrap " << _name << "HP:" << _hp << ", DEAD" << std::endl;
	else
		std::cout << "ClapTrap " << _name << "Energy:" << _ep << ", STAN" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _name << " get " << amount << " damage HP." << std::endl;
	_hp = _hp - amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hp > 0 && _ep > 0)
	{
		std::cout << _name << " Heals himself for " << amount << std::endl;
		_hp = _hp + amount;
		_ep--;
	}
}
