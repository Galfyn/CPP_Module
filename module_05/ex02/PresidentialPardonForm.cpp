#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5) {
	this->_target = target;
	std::cout << "[PresidentialPardonForm] Default constructor." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): Form(other.getName(), other.getGradeSign(), other.getGradeExecute()) {
	this->_target = other._target;
	std::cout << "[PresidentialPardonForm] Copy constructor." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	if (this != &other)
		this->_target = other._target;
	std::cout << "[PresidentialPardonForm] Assingnment operator." << std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "[PresidentialPardonForm] Destructor." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & other) const
{
	if (other.getGrade() <= this->getGradeExecute() && this->getSigned() == true)
	{
		std::cout << _target << " Has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else if (this->getSigned() == false)
		throw "PresidentialPardonForm Form don`t execute";
	else
		throw GradeTooLowException("execute");
}