#include "Conversion.hpp"

int main(int arc, char **arv) {
	if (arc != 2) {
		std::cout << "ERROR ARGUMENT." << std::endl;
		return (0);
	}
	std::cout << "______________________________" << std::endl;
	Conversion a(arv[1]);
	(void) a;
	std::cout << "______________________________" << std::endl;

}