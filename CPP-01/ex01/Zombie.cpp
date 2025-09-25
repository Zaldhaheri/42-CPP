#include "Zombie.hpp"

Zombie::Zombie(void): _name("... I forgot...")
{
    std::cout << "I just turned into a zombie, my name is " << _name << "\n";
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
    std::cout << "I remember... my name is " << _name << "\n";
}