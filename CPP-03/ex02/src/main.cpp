#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Zayed");
    ScavTrap s("Saeed");
    FragTrap f("Fahad");

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
    b.beRepaired(2);
    c.beRepaired(2);

    std::cout << std::endl;
    s.attack("Hamad");
    s.takeDamage(20);
    s.beRepaired(10);
    s.guardGate();

    std::cout << std::endl;
    f.attack("Hamad");
    f.takeDamage(50);
    f.beRepaired(50);
    f.highFiveGuys();

    std::cout << std::endl;
}