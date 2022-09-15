#include "Form.hpp"

Form::Form(): _name("Clark"), _signed(false), _gradeSign(100), _gradeExecute(100) {
	std::cout << "[Form] Default constructor" << std::endl;
}
Form::Form(std::string name, int sign, int execute): _name(name), _signed(false), _gradeSign(sign), _gradeExecute(execute){
	if (sign < 1 || execute < 1)
		throw GradeTooHighException("default");
	if (execute > 150 || execute > 150)
		throw GradeTooLowException("default");
	std::cout << "[Form] With param constructor" << std::endl;
}

Form::Form(const Form &other): _name(other._name), _gradeSign(other._gradeSign), _gradeExecute(other._gradeExecute) {
	_signed = other._signed;
	std::cout << "[Form] Copy constructor" << std::endl;
}

Form &Form::operator=(const Form &other) {
	if (this != & other)
		_signed = other._signed;
	std::cout << "[Form] Assignment operator" << std::endl;
	return *this;
}

Form::~Form() {
	std::cout << "[Form] Destructor" << std::endl;
}

std::string Form::getName() const {
	return _name;
}

int Form::getGradeSign() const {
	return _gradeSign;
}

int Form::getGradeExecute() const {
	return _gradeExecute;
}

bool Form::getSigned() const {
	return _signed;
}

void Form::beSigned(Bureaucrat &other) {
	if (this->getSigned() == true){
		std::cout << "Form is already signed";
		return;
	}
	if (other.getGrade() <= _gradeSign){
		_signed = true;
		std::cout << other.getName() << " singed Form " << this->getName() << std::endl;
	}
	else
		throw GradeTooLowException("sign");
}

Form::GradeTooHighException::GradeTooHighException(std::string target): _target(target){}
Form::GradeTooHighException::~GradeTooHighException() throw(){}

std::string Form::GradeTooHighException::message_sign() const throw() {
	return ("Don't signed. Bureaucrat grade very hight.");
}

std::string Form::GradeTooHighException::message_default() const throw() {
	return ("'Grade execute' or 'Grade signed' very higt.");
}

std::string Form::GradeTooHighException::message_execute() const throw() {
	return ("Don't execute. Bureaucrat grade very hight.");
}

Form::GradeTooLowException::GradeTooLowException(std::string target): _target(target) {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}

std::string Form::GradeTooLowException::message_sign() const throw() {
	return ("Don't signed. Bureaucrat grade very low.");
}

std::string Form::GradeTooLowException::message_default() const throw() {
	return ("'Grade execute' or 'Grade signed' very low.");
}

std::string Form::GradeTooLowException::message_execute() const throw() {
	return ("Don't execute. Bureaucrat grade very low.");
}

std::ostream & operator<<(std::ostream & out, const Form & other)
{
	out << "Form name       : " << other.getName() << std::endl
		<< "Grade to sign   : " << other.getGradeSign() << std::endl
		<< "Grade to execute: " << other.getGradeExecute() << std::endl
		<< "Signed          : " << std::boolalpha << other.getSigned() << std::endl;
	return out;
}