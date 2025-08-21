#include "Zombie.hpp"

Zombie *zombieHorde(int N, str name)
{
    Zombie *zombies = new Zombie[N];
    if (zombies == NULL)
    {
        std::cout << "Allocation of zombies failed\n";
        return (NULL);
    }
    for (int i = 0; i <= N; i++)
        zombies[i].setName(name);
    return (zombies);
}