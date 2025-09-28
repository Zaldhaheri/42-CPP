#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(string name);
        FragTrap(const FragTrap &a);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &a);
        void attack(const string &target);
        void highFiveGuys();
};