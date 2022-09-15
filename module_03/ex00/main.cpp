#include "ClapTrap.hpp"

int main() {
	std::cout << "-------------------------------------------" << std::endl;
	ClapTrap wolf("Wolf");
	ClapTrap tiger("Tiger");

	tiger.attack(wolf.getName());
	wolf.takeDamage(5);
	wolf.beRepaired(10);
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Wolf HP: " << wolf.getHp() << std::endl;
	std::cout << "Wolf EP: " << wolf.getEp() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	return 0;
}
