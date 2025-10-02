/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:28:14 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/10/02 16:28:14 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
: Animal("Dog")
{
    std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(const Dog &c)
: Animal(c)
{
    std::cout << "Dog Copy Constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &c)
{
    std::cout << "Dog Copy Assignment Operator" << std::endl;
    if (this != &c)
        this->_type = c._type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}