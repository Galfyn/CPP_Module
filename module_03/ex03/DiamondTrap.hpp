#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &);
	DiamondTrap & operator =(const DiamondTrap &);
	~DiamondTrap();

	void whoAmI();

	using ScavTrap::attack;
};


#endif
