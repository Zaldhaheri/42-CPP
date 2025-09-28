#pragma once

#include <iostream>
#include <string>

typedef std::string string;

class ClapTrap
{
	protected:
		string _name;
		unsigned int _healthPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	
	public:
		ClapTrap();
		ClapTrap(string name);
		ClapTrap(const ClapTrap &a);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &a);
		void attack(const string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};