#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name("Default")
, _healthPoints(10)
, _energyPoints(10)
, _attackDamage(0)
{
    std::cout << "Claptrap " << _name << " has been constructed\n";
}

ClapTrap::ClapTrap(string name)
: _name(name)
, _healthPoints(10)
, _energyPoints(10)
, _attackDamage(0)
{
    std::cout << "Claptrap " << _name << " has been constructed\n";
}

ClapTrap::ClapTrap(const ClapTrap &a)
: _name(a._name)
, _healthPoints(a._healthPoints)
, _energyPoints(a._energyPoints)
, _attackDamage(a._attackDamage)
{
    std::cout << "Claptrap " << _name << " has been duplicated\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap " << _name << " has been destroyed\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a)
{
    _name = a._name;
    _healthPoints = a._healthPoints;
    _energyPoints = a._energyPoints;
    _attackDamage = a._attackDamage;
    return *this;
}

void ClapTrap::attack(const string& target)
{
    if (_energyPoints < 1)
    {
        std::cout << "Claptrap " << _name << " has no energy left to attack\n";
        return ;
    }
    _energyPoints--;
    std::cout << "Claptrap " << _name << " has attacked " << target 
            << ", causing " << _attackDamage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_healthPoints < amount)
        _healthPoints = 0;
    else
        _healthPoints -= amount;
    std::cout << "Claptrap " << _name << " has taken " << amount
            << " points of damage, health is now at " << _healthPoints << " points\n";
    if (_healthPoints == 0)
        std::cout << _name << " has died in battle\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints < 1)
    {
        std::cout << "Claptrap " << _name << " has no energy left to repair itself\n";
        return ;
    }
    _energyPoints--;
    _healthPoints += amount;
    std::cout << "Claptrap " << _name << " has repaired " << amount
            << " health points, health is now at " << _healthPoints << " points\n";
}