#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
    std::cout << _name <<" got shot and died\n";
}

void Zombie::announce(void) const
{
    std::cout << _name << ":  BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(str name)
{
    _name = name;
}