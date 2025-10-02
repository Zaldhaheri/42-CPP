/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:28:45 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/10/02 16:28:45 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
: WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
: WrongAnimal(c)
{
    std::cout << "WrongCat Copy Constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &c)
{
    std::cout << "WrongCat Copy Assignment Operator" << std::endl;
    if (this != &c)
        this->_type = c._type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}