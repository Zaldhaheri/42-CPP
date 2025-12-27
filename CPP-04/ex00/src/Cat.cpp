/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:28:10 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/10/02 16:28:10 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
: Animal("Cat")
{
    std::cout << "Cat Default Constructor" << std::endl;
}

Cat::Cat(const Cat &c)
: Animal(c)
{
    std::cout << "Cat Copy Constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Cat Copy Assignment Operator" << std::endl;
    if (this != &c)
        this->_type = c._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}