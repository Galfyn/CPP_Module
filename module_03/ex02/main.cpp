#include "FragTrap.hpp"

int main() {

	std::cout << "-------------------------------------------" << std::endl;
	ClapTrap clap("Wolf");
	ScavTrap scav("Tiger");
	FragTrap frag("Leon");
	std::cout << "-------------------------------------------" << std::endl;

	std::cout << "Name: "<< clap.getName() << std::endl;
	std::cout << "HP: "<< clap.getHp() << std::endl;
	std::cout << "EP: "<< clap.getEp() << std::endl;
	std::cout << "Damage: "<< clap.getDamage() << std::endl;

	std::cout << "-------------------------------------------" << std::endl;

	scav.guardGate();
	std::cout << "Name: "<< scav.getName() << std::endl;
	std::cout << "HP: "<< scav.getHp() << std::endl;
	std::cout << "EP: "<< scav.getEp() << std::endl;
	std::cout << "Damage: "<< scav.getDamage() << std::endl;

	std::cout << "-------------------------------------------" << std::endl;

	frag.highFivesGuys();
	std::cout << "Name: "<< frag.getName() << std::endl;
	std::cout << "HP: "<< frag.getHp() << std::endl;
	std::cout << "EP: "<< frag.getEp() << std::endl;
	std::cout << "Damage: "<< frag.getDamage() << std::endl;

	std::cout << "-------------------------------------------" << std::endl;
	scav.attack(clap.getName());
	clap.takeDamage(scav.getDamage());
	std::cout << "-------------------------------------------" << std::endl;
	return 0;
}
