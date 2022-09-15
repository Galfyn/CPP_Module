#include "Character.hpp"

Character::Character() {
	_name = "Player";
	_point = NULL;
	for (int i = 0; i < LEN; i++)
		_materia[i] = NULL;
	std::cout << "[Character] Default constructor" << std::endl;
}

Character::Character(std::string name) {
	this->_name = name;
	_point = NULL;
	for (int i = 0; i < LEN; i++)
		_materia[i] = NULL;
	std::cout << "[Character] Constructor with param" << std::endl;
}

Character::Character(const Character &other) {
	_name = other._name;
	for (int i = 0; i < LEN; i++) {
		if (_materia[i] != NULL)
			delete _materia[i];
		if (other._materia[i])
			_materia[i] = other._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
	std::cout << "[Character] Copy constructor" << std::endl;
}

Character &Character::operator=(const Character &other) {
	if (this != & other){
		_name = other._name;
		for (int i = 0; i < LEN; i++) {
			if(_materia[i])
				delete _materia[i];
			_materia[i] = other._materia[i]->clone();
		}
	}
	std::cout << "[Character] Assignment operator" << std::endl;
	return *this;
}

Character::~Character() {
	for (int i = 0; i < LEN; i++) {
		if (_materia[i] != NULL)
			delete _materia[i];
	}
	std::cout << "[Character] Destructor";
}

const std::string &Character::getName() const {
	return _name;
}

void Character::equip(AMateria *materia) {
	if (materia == NULL){
		std::cout << "Error: equip";
		return;
	}
	for (int i = 0; i < LEN; i++) {
		if (this->_materia[i] == NULL){
			_materia[i] = materia;
			std::cout << ">> Materia: " << materia->getType() << " equip" << std::endl;
			return;
		}
	}
	std::cout << "Not enough slots for" << materia->getType() << std::endl;
	delete materia;
}

void Character::unequip(int id) {
	if (id < 0 || id > 3){
		std::cout << "Not valid index" << std::endl;
		return;
	}
	if (_materia[id] == NULL)
	{
		std::cout << "Materia with index " << std::to_string(id) << "does not exist" << std::endl;
		return;
	}
	_point = _materia[id];
	_materia[id] = NULL;
	std::cout << "Materia with index " << std::to_string(id) << "unequip" << std::endl;
}

void Character::use(int id, ICharacter &target) {
	if (_point != NULL){
		delete _point;
		_point = NULL;
	}
	if (id > 3 || id < 0){
		std::cout << "Not valid index" << std::endl;
		return;
	}
	if (_materia[id] == NULL){
		std::cout << "Materia with index " << std::to_string(id) << "does not exist" << std::endl;
		return;
	}
	_materia[id]->use(target);
	delete _materia[id];
	_materia[id] = NULL;
}


