#include "Harl.hpp"

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "Invalid input arguments." << std::endl;
		exit(EXIT_FAILURE);
	}

	Harl harl = Harl();
	
	harl.complain(argv[1]);
	exit(EXIT_SUCCESS);
}