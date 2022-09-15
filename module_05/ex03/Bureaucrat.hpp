#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
private:
	std::string const	_name;
	int 				_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(const Bureaucrat & other);
	Bureaucrat & operator =(Bureaucrat const & other);
	~Bureaucrat();

	void		upGrade();
	void		downGrade();
	void 		signForm(Form & other);
	void		executeForm(Form & other);

	int			getGrade() const;
	std::string	getName() const;

	class GradeTooHightException : public std::exception
	{
	public:

		GradeTooHightException();
		~GradeTooHightException() throw();

		std::string message() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:

		GradeTooLowException();
		~GradeTooLowException() throw();
		std::string message() const throw();
	};
};

std::ostream & operator<<(std::ostream & out, const Bureaucrat & other);

#endif
