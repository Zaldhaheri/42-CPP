#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon):
_weapon(weapon)
{
    _name = name;
    std::cout << _name << " is ready to attack with their " << _weapon.getType() << "\n";
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << "\n";
}
