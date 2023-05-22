#include "Zombie.hpp"

int	main(void) {
	Zombie nameless;
	
	nameless.announce();
	nameless.set_name("TESTING");
	nameless.announce();
	
	Zombie *bob = newZombie("HEAP BOB");
	randomChump("STACK CHARLIE");
	
	delete bob;
	return (0);
}