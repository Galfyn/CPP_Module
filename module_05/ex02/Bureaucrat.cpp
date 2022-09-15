#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Clark"), _grade(100) {
	std::cout << "[Bureaucrat] Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHightException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	std::cout << "[Bureaucrat] Constructor with param" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
	std::cout << "[Bureaucrat] Copy constructor " << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if (this != &other)
		_grade = other._grade;
	std::cout << "[Bureaucrat] Assignment operator" << std::endl;
	return  *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "[Bureaucrat] Destructor" << std::endl;
}

std::string Bureaucrat::getName() const{
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

void Bureaucrat::upGrade() {
	if ((_grade - 1) < 1)
		throw Bureaucrat::GradeTooHightException();
	_grade--;
	std::cout << "Grade increased" << std::endl;
}

void Bureaucrat::downGrade() {
	if ((_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
	std::cout << "Downgraded" << std::endl;
}

void Bureaucrat::signForm(Form & other)
{
	if (other.getSigned() == true)
	{
		std::cout << _name << " couldn't sign " << other.getName()
				  << " because this Form is already signed." << std::endl;
		return;
	}
	try
	{
		other.beSigned(*this);
	}
	catch (Form::GradeTooLowException & other)
	{
		std::cout << "Don't signed. " << this->_name << " bureaucrat grade very low " << std::endl;
	}
}

void Bureaucrat::executeForm(Form & other){
	try {
		other.execute(*this);
		std::cout << this->_name << " executed " << other.getName() << std::endl;
	}
	catch (const char * buf) {
		std::cout << buf << std::endl;
	}
	catch (Form::GradeTooLowException & other){
		std::cout << "Don't execute. " << this->_name << " bureaucrat grade very low." << std::endl;
	}
}

Bureaucrat::GradeTooHightException::GradeTooHightException() {}
Bureaucrat::GradeTooHightException::~GradeTooHightException() throw() {}

std::string Bureaucrat::GradeTooHightException::message() const throw() {
	return ("Rating cannot be less than 1");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

std::string Bureaucrat::GradeTooLowException::message() const throw() {
	return ("Rating cannot be more than 150");
}

std::ostream & operator<<(std::ostream & out, const Bureaucrat & other)
{
	out << other.getName() << ", bureaucrat grade " << std::to_string(other.getGrade()) << std::endl;
	return out;
}