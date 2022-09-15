#pragma once
#include "Form.hpp"
#include <iostream>
#include <unistd.h>


class RobotomyRequestForm: public Form{
private:
	std::string _target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & other) const;
};
