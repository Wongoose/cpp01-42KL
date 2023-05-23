#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::complain(std::string level) {
	void (Harl::*functions[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4) {
		if (level == levels[i]) {
			(this->*functions[i])();
			return;
		}
		i++;
	}
	std::cout << "Invalid level given! Please try again." << std::endl;
}

void Harl::debug() {
	std::cout << "I am a DEBUG message: something is happening right now..." << std::endl;
}

void Harl::info() {
	std::cout << "I am a INFO message: something is happening right now..." << std::endl;
}

void Harl::warning() {
	std::cout << "I am a WARNING message: something is happening right now..." << std::endl;
}

void Harl::error() {
	std::cout << "I am a ERROR message: something is happening right now..." << std::endl;
}
