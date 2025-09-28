#pragma once

#include "ClapTrap.hpp"

typedef std::string string;

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(string name);
		ScavTrap(const ScavTrap &a);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &a);
		void attack(const string &traget);
		void guardGate();
};

