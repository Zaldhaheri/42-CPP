/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:24:31 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/09/28 16:24:31 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Zayed");
    ScavTrap s("Saeed");
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
    b.takeDamage(11);
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
}