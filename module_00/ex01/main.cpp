#include "PhoneBook.hpp"
#include <iostream>

int main(int arc, char **arv){
	PhoneBook book;
	std::string in;
	int id;

	if (arc > 1){
		std::cout << "To many argument for program: " << arv[0] << std::endl;
		return 0;
	}
	else{
		id = 0;
		std::cout << "------------------------------------------------" << std::endl;
		std::cout << "| To use the phonebook use one of the commands |" << std::endl;
		std::cout << "| ADD        (save new contact)                |" << std::endl;
		std::cout << "| SEARCH     (display a specific contact)      |" << std::endl;
		std::cout << "| EXIT       (The program quits)               |" << std::endl;
		std::cout << "------------------------------------------------" << std::endl;
		while (1){
			std::cout << "Enter command: " << std::endl;
			std::getline(std::cin, in);

			if (in == "ADD"){
				book.add_contact(&id);
				if (id == 8)
					id = 0;
			}
			else if (in == "SEARCH"){
				book.show_contactlist();
			}
			else if (in == "EXIT"){
				std::cout << "Goodbye!" << std::endl;
				return 0;
			}
			else
				std::cout << "Try again..." << std::endl;
			clearerr(stdin);
			std::cin.clear();
			fflush(stdin);
		}
	}
}
