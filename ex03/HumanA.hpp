/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:01:44 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 13:02:18 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"
# include <iostream>

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		std::string getName() const;

		void setName(std::string name);
		void setWeapon(Weapon &weapon);

		void attack();

	private:
		std::string name;
		Weapon &weapon;
};

#endif