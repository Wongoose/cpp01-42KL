/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:02:09 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 13:02:18 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (level == levels[i]) break;
		i++;
	}

	switch (i) {
    case 0:
		std::cout << "[ DEBUG ]" << std::endl;
    	debug();
		std::cout << std::endl;

    case 1:
		std::cout << "[ INFO ]" << std::endl;
		info();
		std::cout << std::endl;
    
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		warning();
		std::cout << std::endl;

    case 3:
		std::cout << "[ ERROR ]" << std::endl;
		error();
		std::cout << std::endl;
		break; // break is where switch case will stop printing

    default:
      std::cout << "[ Probably complaining about insignificant problems ]"
                << std::endl;
	}
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
