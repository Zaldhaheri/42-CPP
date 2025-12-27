/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:31:06 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/10/02 16:31:06 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal()
: _type("Default")
{
    std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(string name)
: _type(name)
{
    std::cout << "Animal Type Constructor" << std::endl;
}

Animal::Animal(const Animal &a)
: _type(a._type)
{
    std::cout << "Animal Copy Constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &a)
{
    std::cout << "Animal Copy Assignment Operator" << std::endl;
    if (this != &a)
        this->_type = a._type;
    return *this;
}

void Animal::makeSound() const
{
}

void Animal::setType(const string type)
{
    this->_type = type;
}

string Animal::getType() const
{
    return this->_type;
}