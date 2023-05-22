#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {
	public:
		Zombie();
		~Zombie();

		std::string get_name() const;

		void set_name(std::string name);

		void announce();

	private:
		std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif