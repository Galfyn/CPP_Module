#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137) {
	this->_target = target;
	std::cout << "[ShrubberyCreationForm] With constructor param." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):  Form(other.getName(), other.getGradeSign(), other.getGradeExecute()) {
	this->_target = other._target;
	std::cout << "[ShrubberyCreationForm] Copy constructor." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	if (this != &other)
		_target = other._target;
	std::cout << "[ShrubberyCreationForm] Assignment operator." << std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "[ShrubberyCreationForm] Destructor." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & other) const
{
	if (other.getGrade() <= this->getGradeExecute() && this->getSigned() == true)
	{
		std::ofstream out(this->_target + "_shrubbery");
		out << "\n"
		"               ,@@@@@@@,\n"
	  "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
	  "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
	  "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
	  "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
	  "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
	  "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
	  "       |o|        | |         | |\n"
	  "       |.|        | |         | |\n"
	  "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
		out.close();
	}
	else if (this->getGradeSign() == false)
		throw "ShrubberyCreationForm Form DON'T EXECUTE!!!";
	else
		throw GradeTooLowException("execute");
}