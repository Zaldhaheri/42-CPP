/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:29:26 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/10/02 16:29:26 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
: Animal("Cat")
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &c)
: Animal(c)
{
    std::cout << "Cat Copy Constructor" << std::endl;
    this->brain = new Brain(*c.brain);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Cat Copy Assignment Operator" << std::endl;
    if (this != &c)
    {
        this->_type = c._type;
        *this->brain = *c.brain;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

void Cat::setIdea(int index, const string idea)
{
    this->brain->setIdea(index, idea);
}

string Cat::getIdea(int index) const
{
    return this->brain->getIdea(index);
}