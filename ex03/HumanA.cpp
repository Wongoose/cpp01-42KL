/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:01:42 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 13:02:18 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}
HumanA::~HumanA() {}

std::string HumanA::getName() const {
	return (this->name);
}

void HumanA::setName(std::string name) {
	this->name = name;
}

void HumanA::setWeapon(Weapon &weapon) {
	this->weapon = weapon;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << "!" << std::endl;
}