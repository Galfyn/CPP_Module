#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define LEN 4

class Character: public ICharacter{
protected:
	AMateria* 	_materia[4];
	AMateria* 	_point;
	std::string _name;
public:
	Character();
	Character(std::string name);
	Character(const Character & other);
	Character & operator =(const Character & other);
	~Character();

	std::string const & getName() const;
	void equip(AMateria *materia);
	void unequip(int id);
	void use(int id, ICharacter & target);
};

#endif
