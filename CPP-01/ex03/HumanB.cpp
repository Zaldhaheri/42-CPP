#include "HumanB.hpp"

HumanB::HumanB()
: _name("None"), _weapon(nullptr)
{
}

HumanB::HumanB(string name)
: _name(name)
{
    std::cout << _name << " is ready to attack but has no weapon" << "\n";
}

HumanB::~HumanB()
{
    std::cout << _name << " died honorably in battle\n";
}

void HumanB::attack() const
{
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
    else
        std::cout << _name << "tries to attack but has no weapon";
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
    std::cout << _name << " grabbed a " << _weapon->getType() << "\n";
}