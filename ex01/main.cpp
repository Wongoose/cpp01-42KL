#include "Zombie.hpp"
#include <iostream>

int main(void) {
	Zombie *zombieList;

	zombieList = zombieHorde(10, "Bobby");
	delete[] zombieList;
}