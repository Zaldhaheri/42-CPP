#include "Weapon.hpp"

Weapon::Weapon()
: _type("None")
{
}

Weapon::Weapon(const string &type)
: _type(type)
{
}

Weapon::~Weapon()
{
    std::cout << "The " << this->getType() << " got destroyed in battle\n";
}

void Weapon::setType(const string &type)
{
    std::cout << "The " << this->getType() << " transformed into a ";
    _type = type;
    std::cout << this->getType() << "\n";
}

const string &Weapon::getType() const
{
    return _type;
}

