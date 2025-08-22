#include "Zombie.hpp"

int main()
{
    Zombie *zombies;
    int zombieCount = 12;

    zombies = zombieHorde(zombieCount, "Zombie man");
    if (zombies == NULL)
        return (1);
    for (int i = 0; i < zombieCount; i++)
    {
        std::cout << i + 1 << " ";
        zombies[i].announce();
    }
    delete[] zombies;
    zombies = zombieHorde(0, "no zombies");
    return (0);
}