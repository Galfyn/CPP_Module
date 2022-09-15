#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

#define LEN 4

class MateriaSource: public IMateriaSource{
private:
	AMateria *_source[LEN];
public:
	MateriaSource();
	MateriaSource(MateriaSource & other);
	MateriaSource const & operator =(const MateriaSource & other);
	~MateriaSource();

	void learnMateria(AMateria* materia);
	AMateria * createMateria(std::string const & type);
};

#endif
