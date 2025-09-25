#include "Zombie.hpp"

int main()
{
    Zombie *z1 = new Zombie("1");
    Zombie *z2 = new Zombie("2");

    std::cout << std::endl;
    z1->announce();
    z2->announce();

    std::cout << std::endl;
    delete z1;
    
    std::cout << std::endl;
    z1 = newZombie("new 1");
    z1->announce();
    
    std::cout << std::endl;
    randomChump("3");
    randomChump("4");
    
    std::cout << std::endl;
    delete z1;
    delete z2;
    
    std::cout << std::endl;
}