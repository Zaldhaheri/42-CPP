/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:24:34 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/09/28 16:24:34 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap()
{
    _healthPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " has been constructed\n";
}

ScavTrap::ScavTrap(string name)
: ClapTrap(name)
{
    _healthPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " has been constructed\n";
}

ScavTrap::ScavTrap(const ScavTrap &a)
: ClapTrap(a._name)
{
    _healthPoints = a._healthPoints;
    _energyPoints = a._energyPoints;
    _attackDamage = a._attackDamage;
    std::cout << "ScavTrap " << _name << " has been duplicated\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " has been destroyed\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &a)
{
    _name = a._name;
    _healthPoints = a._healthPoints;
    _energyPoints = a._energyPoints;
    _attackDamage = a._attackDamage;
    return *this;
}

void ScavTrap::attack(const string &target)
{
    if (_energyPoints < 1)
    {
        std::cout << "ScavTrap " << _name << " has no energy left to attack\n";
        return ;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " has attacked " << target 
            << ", causing " << _attackDamage << " points of damage" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode\n";
}