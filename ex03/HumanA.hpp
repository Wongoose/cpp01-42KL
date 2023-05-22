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