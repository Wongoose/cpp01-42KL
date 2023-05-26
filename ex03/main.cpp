/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:01:48 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 13:02:18 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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