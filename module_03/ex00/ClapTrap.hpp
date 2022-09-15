#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap & operator =(const ClapTrap &);
	~ClapTrap();

	std::string getName();
	unsigned int getHp();
	unsigned int getEp();
	unsigned int getDamage();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif