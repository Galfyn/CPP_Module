#include "Data.hpp"

int main()
{
	std::srand(time(0));
	Base *x = NULL;

	std::cout << "---Actual type by POINTER---" << std::endl;
	Base *p = generate();
	identify(*p);
	delete p;
	std::cout << "---Actual type by LINK---" << std::endl;
	Base &pt = *generate();
	identify(pt);
	std::cout << "---Actual type by EMPTY POINTER---" << std::endl;
	identify(x);
	delete &pt;
	return 0;
}