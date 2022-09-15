#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {
}
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &type) {
	this->_weapon = &type;
}

void HumanB::attack() {
	if (_weapon){
		std::cout << _name << ": Attack with a " << _weapon->getType() << std::endl;
	} else{
		std::cout << _name << ": I don't have weapon" << std::endl;
	}
}