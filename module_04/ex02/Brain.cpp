#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[Brain] Default constructor" <<std::endl;
}

Brain::Brain(std::string value)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = value;
	std::cout << "[Brain] Constructor with params" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "[Brain] Copy constructor" <<std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "[Brain] Assignment operator" <<std::endl;
	if (this != &other){
		for (int i = 0; i < 100; ++i) {
			this->_ideas[i] = other._ideas[i];
			}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "[Brain] Destructor" <<std::endl;
}

