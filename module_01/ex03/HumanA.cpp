#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {
}
HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << this->_name << ": Attack with a " << this->_weapon.getType() << std::endl;
}