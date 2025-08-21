#include "Zombie.hpp"

Zombie::Zombie(str s)
: _name(s)
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