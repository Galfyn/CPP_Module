#include <iostream>
#include "Zombie.hpp"

int main( void ) {
	Zombie	foo("Foo");
	foo.announce();

	Zombie * neo = newZombie("Neo");
	randomChump("Chump");
	delete neo;
	return 0;
}
