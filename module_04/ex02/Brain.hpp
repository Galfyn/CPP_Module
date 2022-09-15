#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
protected:
	std::string _ideas[100];
public:
	Brain();
	Brain(std::string value);
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	~Brain();

};

#endif