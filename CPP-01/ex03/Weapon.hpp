#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

typedef std::string string;

class Weapon
{
	public:
		Weapon();
		~Weapon();
		string getType();
		void setType(string);
	private:
		string type;
};

#endif