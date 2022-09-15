#include "Zombie.hpp"

#define NB 7

int main(){
	Zombie *horde;

	horde = zombieHorde(NB, "Zombie #");
	delete[] horde;
}