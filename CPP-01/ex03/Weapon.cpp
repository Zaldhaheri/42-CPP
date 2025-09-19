#include "Weapon.hpp"

Weapon::Weapon()
: _type("None")
{
}

Weapon::Weapon(const string& type)
: _type(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(const string &type)
{
    _type = type;
}

string Weapon::getType() const
{
    return _type;
}

