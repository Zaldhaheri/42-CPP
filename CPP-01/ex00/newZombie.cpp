#include "Zombie.hpp"

Zombie *newZombie(str name)
{
    Zombie *z = new Zombie(name);
    return (z);
}