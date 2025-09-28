#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Zayed");

    std::cout << std::endl;
    a.attack("Rashed");
    a.attack("Rashed");
    a.attack("Rashed");
    a.attack("Rashed");
    a.attack("Rashed");
    a.attack("Rashed");
    a.attack("Rashed");
    a.attack("Rashed");
    a.attack("Rashed");
    a.attack("Rashed");
    a.attack("Rashed");
    a.beRepaired(1);

    std::cout << std::endl;
    b.attack("Abdulla");
    b.takeDamage(9);
    b.beRepaired(10);

    std::cout << std::endl;
    ClapTrap c(b);
    c.attack("John Cena");
    b.takeDamage(10);
    c.beRepaired(2);
}