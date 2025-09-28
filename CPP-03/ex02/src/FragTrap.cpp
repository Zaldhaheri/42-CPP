#include "../inc/FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap()
{
    _healthPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has been constructed\n";
}

FragTrap::FragTrap(string name)
: ClapTrap(name)
{
    _healthPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has been constructed\n";
}

FragTrap::FragTrap(const FragTrap &a)
: ClapTrap(a._name)
{
    _healthPoints = a._healthPoints;
    _energyPoints = a._energyPoints;
    _attackDamage = a._attackDamage;
    std::cout << "FragTrap " << _name << " has been duplicated\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has been destroyed\n";
}

FragTrap &FragTrap::operator=(const FragTrap &a)
{
    _name = a._name;
    _healthPoints = a._healthPoints;
    _energyPoints = a._energyPoints;
    _attackDamage = a._attackDamage;
    return *this;
}

void FragTrap::attack(const string &target)
{
    if (_energyPoints < 1)
    {
        std::cout << "FragTrap " << _name << " has no energy left to attack\n";
        return ;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " has attacked " << target 
            << ", causing " << _attackDamage << " points of damage" << std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap " << _name << " wants to high five everyone\n";
}