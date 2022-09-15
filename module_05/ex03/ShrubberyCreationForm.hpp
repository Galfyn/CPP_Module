#pragma once
#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form{
private:
	std::string _target;

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & other) const;
};
