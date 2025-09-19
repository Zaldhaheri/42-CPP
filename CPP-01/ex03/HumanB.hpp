#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
    public:
        HumanB();
        HumanB(string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);
    private:
        string _name;
        Weapon *_weapon;
};


#endif