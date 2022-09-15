#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < LEN; i++)
		_source[i] = NULL;
	std::cout << "[MateriaSource] Default constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &other) {
	for (int i = 0; i < LEN; i++) {
		if (_source[i] != NULL)
			delete _source[i];
		_source[i] = other._source[i];
	}
	std::cout << "[MateriaSource] Copy constructor" << std::endl;
}

MateriaSource const & MateriaSource::operator=(const MateriaSource &other) {
	if (this != &other){
		for (int i = 0; i < LEN; i++) {
			if(other._source[i] != NULL)
				delete other._source[i];
			_source[i] = other._source[i];
		}
	}
	std::cout << "[MateriaSource] Assignment operator" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < LEN; i++) {
		if (_source[i] != NULL)
			delete _source[i];
	}
	std::cout << "[MateriaSource] Destructor" << std::endl;
}


void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < LEN; i++){
		if(_source[i] == NULL){
			_source[i] = materia;
			std::cout << "Materia " << materia->getType() << " is learn!" << std::endl;
			return;
		}
	}
	std::cout << "--------Don't have slot for learn.";
}

AMateria * MateriaSource::createMateria( std::string const &type) {
	for (int i = 0; i < LEN; i++) {
		if (type == _source[i]->getType()){
			std::cout << "--------Materia have been created!" << std::endl;
			return _source[i]->clone();
		}
	}
	return NULL;
}

