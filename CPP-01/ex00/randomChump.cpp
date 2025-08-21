#include "Zombie.hpp"

void randomChump(str name)
{
    Zombie *z = new Zombie(name);
    z->announce();
}