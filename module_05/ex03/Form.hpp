#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExecute;
public:
	Form();
	Form(std::string name, int sign, int execute);
	Form(const Form & other);
	Form & operator =(const Form & other);
	virtual ~Form();

	std::string getName() const;
	bool 		getSigned() const;
	int 		getGradeSign() const;
	int 		getGradeExecute() const;
	void 		beSigned(Bureaucrat & other);

	virtual void execute(Bureaucrat const & other) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		std::string _target;

		GradeTooHighException(std::string target);
		~GradeTooHighException() throw();

		std::string message_sign() const throw();
		std::string message_execute() const throw();
		std::string message_default() const throw();

	};

	class GradeTooLowException : public std::exception
	{
	public:
		std::string _target;

		GradeTooLowException(std::string target);
		~GradeTooLowException() throw();

		std::string message_sign() const throw();
		std::string message_execute() const throw();
		std::string message_default() const throw();

	};
};

std::ostream & operator<<(std::ostream & out, const Form & other);

#endif
