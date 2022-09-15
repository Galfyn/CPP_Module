#include "Intern.hpp"

Intern::Intern() {
	std::cout << "[Intern] Default constructor." << std::endl;
}

Intern::~Intern() {
	std::cout << "[Intern] Destructor." << std::endl;
}

Form *Intern::makeForm(std::string name, std::string target) {
	Form *create_form;
	int i = 0;
	std::string arr[3] = {"Presidential", "Robotomy", "Shrubbery"};

	while (i < 3){
		if (arr[i] == name)
		{
			std::cout << "Intern creates " << name << " Form" << std::endl;
			break;
		}
		i++;
	}
	switch (i)
	{
		case 0:
			create_form = new PresidentialPardonForm(target);
			break;
		case 1:
			create_form = new RobotomyRequestForm(target);
			break;
		case 2:
			create_form = new ShrubberyCreationForm(target);
			break;
		default:
			throw ("Intern don't creates Form " + name);
	}
	return create_form;
}