#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
public:
	PhoneBook();
	~PhoneBook();
	void add_contact(int *id);
	void show_contactlist();
	std::string get_line(std::string str);

private:
	int count;
	Contact contactlist[8];
};

#endif