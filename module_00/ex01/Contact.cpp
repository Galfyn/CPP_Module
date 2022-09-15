#include "Contact.hpp"
#include <iostream>
Contact::Contact(void) {}
Contact::~Contact(void) {}

int	Contact::set_contact(){
	std::cout << "Enter first name:";
	std::getline(std::cin, this->first_name);
	if (first_name.empty()){
		return 1;
	}
	std::cout << "Enter last name:";
	std::getline(std::cin, this->last_name);
	if (last_name.empty()) {
		return 1;
	}
	std::cout << "Enter nickname:";
	std::getline(std::cin, this->nickname);
	if (nickname.empty()) {
		return 1;
	}
	std::cout << "Enter phonenumber:";
	std::getline(std::cin, this->phone_number);
	if (phone_number.empty()) {
		return 1;
	}
	std::cout << "Enter darkest secret:";
	std::getline(std::cin, this->darkest_secret);
	if (darkest_secret.empty()) {
		return 1;
	}

	return 0;
}
std::string Contact::get_val(std::string line) {
	if (line == "first")
		return first_name;
	else if (line == "last")
		return last_name;
	else
		return nickname;
}
void Contact::get_detal_info() {
	std::cout << "First name    : " << this->first_name << std::endl;
	std::cout << "Last name     : " << this->last_name << std::endl;
	std::cout << "Nickname      : " << this->nickname << std::endl;
	std::cout << "Phone number  : " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}