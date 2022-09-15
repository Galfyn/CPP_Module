#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria{
protected:
	std::string _type;
public:
	Cure();
	Cure(const Cure & other);
	Cure & operator =(const Cure & other);
	~Cure();

	AMateria * clone() const;
	void use(ICharacter & target);
	std::string changeType(void )
	{
		_type = "hell";
		return _type;
	}
};

#endif
