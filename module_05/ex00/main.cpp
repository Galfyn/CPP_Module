#include "Bureaucrat.hpp"

int main() {
	try {
			Bureaucrat clark("Clark", 10);
			std::cout << "Name:  " << clark.getName() << std::endl;
			std::cout << "Grade: " << clark.getGrade() << std::endl;
			clark.upGrade();
			clark.downGrade();
			std::cout  << "-----------------------------" << std::endl;
			clark.upGrade();
			clark.upGrade();
			clark.upGrade();
			clark.upGrade();
			clark.upGrade();
			clark.upGrade();
			clark.upGrade();
			clark.upGrade();
			clark.upGrade();
			std::cout << "Grade: " << clark.getGrade() << std::endl;
			std::cout  << "-----------------------------" << std::endl;

			clark.upGrade();
			clark.upGrade();
			clark.upGrade();
			clark.upGrade();
	}
	catch (Bureaucrat::GradeTooLowException & ex) {
		std::cout << ex.message() << std::endl;
	}
	catch (Bureaucrat::GradeTooHightException &ex) {
		std::cout << ex.message() << std::endl;
	}
	return 0;
}
