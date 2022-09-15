#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av) {

	Harl harl;
	int i = 0;
	std::string pLevel[] = {"DEBUG", "INFO", "WARNING", "ERROR", "default"};

	switch (ac) {
		case 2:
			break;
		default:
			std::cout << "Error argument" << std::endl;
			return 1;
	}
	while (av[1] != pLevel[i] && i != 4)
		i++;
	harl.complain(pLevel[i]);
	return 0;
}
