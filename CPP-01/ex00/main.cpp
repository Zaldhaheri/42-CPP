#include "Zombie.hpp"

int main()
{
    Zombie *z1 = new Zombie("1");
    Zombie *z2 = new Zombie("2");

    z1->announce();
    z2->announce();
    z1 = newZombie("new 1");
    z1->announce();
    randomChump("3");
}