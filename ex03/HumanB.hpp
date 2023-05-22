#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"
# include <iostream>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();

		std::string getName() const;

		void setName(std::string name);
		void setWeapon(Weapon &weapon);

		void attack();

	private:
		std::string name;
		Weapon *weapon; // Using pointer for when value could be NULL
};

#endif