#pragma once

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

class Intern {
public:
	Intern();
	~Intern();

	Form * makeForm(std::string name, std::string target);
};
