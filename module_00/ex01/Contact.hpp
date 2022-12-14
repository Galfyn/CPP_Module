#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <unistd.h>

class Contact{
public:
	Contact();
	~Contact();
	int set_contact();
	std::string get_val(std::string line);
	void get_detal_info();

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif