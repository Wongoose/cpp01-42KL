#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA alyssa("Alyssa", club);
		alyssa.attack();
		club.setType("some other type of club");
		alyssa.attack();
	}

	{
		Weapon club = Weapon("crude spiked club");
		HumanB bob("Bob");

		std::cout << "TEST without weapon" << std::endl;
		bob.attack();

		std::cout << "TEST added weapon" << std::endl;
		bob.setWeapon(club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
}