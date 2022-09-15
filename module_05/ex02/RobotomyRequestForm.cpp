#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45) {
	this->_target = target;
	std::cout << "[RobotomyRequestForm] Default constructor." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): Form(other.getName(), other.getGradeSign(), other.getGradeExecute()){
	this->_target = other._target;
	std::cout << "[RobotomyRequestForm] Copy constructor." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this != &other)
		this->_target = other._target;
	std::cout << "[RobotomyRequestForm] Assingnment operator." << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "[RobotomyRequestForm] Destructor." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & other) const
{
	if (other.getGrade() <= this->getGradeExecute() && this->getSigned() == true)
	{
		std::cout << "[RobotomyRequestForm] ZZZzzzzZzZZzZzzZ" << std::endl;
		std::cout << "[RobotomyRequestForm] ZZZzzzzZzZZzZzzZ" << std::endl;
		std::cout << "[RobotomyRequestForm] ZZZzzzzZzZZzZzzZ" << std::endl;
		if (std::rand() % 2 == 0)
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		else
			std::cout << this->_target << " the robotomy failed" << std::endl;
	}
	else if (this->getSigned() == false)
		throw "[RobotomyRequestForm] Form don`t execute";
	else
		throw GradeTooLowException("execute");
}