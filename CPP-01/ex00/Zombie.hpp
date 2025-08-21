#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Zombie
{
	public:
		Zombie(str s);
		~Zombie(void);
		void announce(void) const;

	private:
		str _name;
};

Zombie	*newZombie(str name);
void	randomChump(str name);

#endif