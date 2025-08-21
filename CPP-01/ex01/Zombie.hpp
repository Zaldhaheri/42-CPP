#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Zombie
{
	public:
		Zombie();
		~Zombie(void);
		void announce(void) const;
		void setName(str name);
	private:
		str _name;
};

Zombie *zombieHorde(int N, str name);

#endif