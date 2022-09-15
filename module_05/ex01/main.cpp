#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		std::cout << "--------------------------------------" << std::endl;
		Bureaucrat clark("Clark", 10);
		std::cout << clark;
		std::cout << "--------------------------------------" << std::endl;
		Form employment("E-2030", 10, 3);
		std::cout << employment;
		clark.signForm(employment);
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "--------------------------------------" << std::endl;

		std::cout << employment;
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "--------------------------------------" << std::endl;

	}

	catch (Form::GradeTooLowException &exception) {
		if (exception._target == "default")
			std::cout << exception.message_default() << std::endl;
		else if(exception._target == "sign")
			std::cout << exception.message_sign() << std::endl;
	}
	catch (Form::GradeTooHighException &exception) {
		if (exception._target == "default")
			std::cout << exception.message_default() << std::endl;
		else if(exception._target == "sign")
			std::cout << exception.message_sign() << std::endl;
	}

	catch (Bureaucrat::GradeTooLowException & ex) {
		std::cout << ex.message() << std::endl;
	}
	catch (Bureaucrat::GradeTooHightException &ex) {
		std::cout << ex.message() << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	return 0;
}
