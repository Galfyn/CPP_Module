#include "Data.hpp"


Base::~Base() {}

Base *generate(void )
{
	int ran = rand();
	if (ran % 10 >= 7)
		return (new A);
	else if (ran % 10<= 3)
		return (new B);
	else
		return (new C);
}

void identify(Base *p)
{
	if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "Class C" << std::endl;
	else
		std::cout << "I'm dead..." << std::endl;
}

void	identify(Base &p)
{
	if ((char *) &p == NULL)
		return;
	try
	{
		(void) dynamic_cast<A &>(p);
		std::cout << "Class A" << std::endl;
	}
	catch (std::bad_cast) {}
	try
	{
		(void) dynamic_cast<B &>(p);
		std::cout << "Class B" << std::endl;
	}
	catch (std::bad_cast) {}
	try
	{
		(void) dynamic_cast<C &>(p);
		std::cout << "Class C" << std::endl;
	} catch (std::bad_cast) {}
}