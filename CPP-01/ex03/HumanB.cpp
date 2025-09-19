#include "HumanB.hpp"

HumanB::HumanB()
: _name("None")
{
}

HumanB::HumanB(string name)
: _name(name)
{
    std::cout << _name << " is ready to attack but has no weapon" << "\n";
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
    std::cout << _name << " grabbed a " << _weapon->getType() << "\n";
}