#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main()
{

	Intern rob;
	Form * newForm1 = NULL;
	Form * newForm2 = NULL;
	Form * newForm3 = NULL;
	std::cout << "------------------------------------------" << std::endl;
	try
	{
		std::cout << "------------------------------------------" << std::endl;
		Bureaucrat clark("Clark", 3);

		std::cout << "------------------------------------------" << std::endl;
		newForm1 = rob.makeForm("Presidential", "President");
		clark.signForm(*newForm1);
		clark.executeForm(*newForm1);
		std::cout << "------------------------------------------" << std::endl;
		newForm2 = rob.makeForm("Robotomy", "Bot");
		clark.signForm(*newForm2);
		clark.executeForm(*newForm2);
		std::cout << "------------------------------------------" << std::endl;
		newForm3 = rob.makeForm("Shrubbery", "Home");
		clark.signForm(*newForm3);
		clark.executeForm(*newForm3);
		std::cout << "------------------------------------------" << std::endl;
	}
	catch (Form::GradeTooLowException & ex)
	{
		if (ex._target == "default")
			std::cout << ex.message_default() << std::endl;
		else if (ex._target == "sign")
			std::cout << ex.message_sign() << std::endl;
	}
	catch (Form::GradeTooHighException & ex)
	{
		if (ex._target == "default")
			std::cout << ex.message_default() << std::endl;
		else if (ex._target == "sign")
			std::cout <<ex.message_sign() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & ex)
	{
		std::cout << ex.message() << std::endl;
	}
	catch (Bureaucrat::GradeTooHightException & ex)
	{
		std::cout << ex.message() << std::endl;
	}
	catch (const char * buf)
	{
		std::cout << buf << std::endl;
	}
	catch (std::string line)
	{
		std::cout << line << std::endl;
	}
	std::cout << "------------------------------------------" << std::endl;
	if (newForm1 != NULL)
		delete newForm1;
	if (newForm2 != NULL)
		delete newForm2;
	if (newForm3 != NULL)
		delete newForm3;
	return (0);
}