#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << "---------------------------------------" << std::endl;

	Animal* pride[10];
	for (int cat = 0; cat < 5; ++cat) {
		pride[cat] = new Cat();
	}
	for (int dog = 5; dog < 10; ++dog) {
		pride[dog] = new Dog();
	}

	std::cout << "---------------------------------------" << std::endl;
	std::cout << "type: " << pride[3]->getType() << "| voice: ";
	pride[3]->makeSound();
	std::cout << "type: " << pride[8]->getType() << "| voice: ";
	pride[8]->makeSound();
	std::cout << "---------------------------------------" << std::endl;

	for (int k = 0; k < 9; ++k) {
		delete pride[k];
	}
	return 0;
}
