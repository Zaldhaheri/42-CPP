#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

typedef std::string string;

class Weapon
{
	public:
		Weapon();
		Weapon(const string& type);
		~Weapon();
		string getType() const;
		void setType(const string& type);
	private:
		string _type;
};

#endif