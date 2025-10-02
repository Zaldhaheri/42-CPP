/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:31:14 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/10/02 16:31:14 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "No Idea";
}

Brain::Brain(const Brain &b)
{
    std::cout << "Brain Copy Constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = b.ideas[i];
}

Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &b)
{
    std::cout << "Brain Copy Assignment Operator" << std::endl;
    if (this != &b)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = b.ideas[i];
    }
    return *this;
}

string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Index out of bounds" << std::endl;
        return "";
    }
    return this->ideas[index];
}

void Brain::setIdea(int index, const string idea)
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Index out of bounds" << std::endl;
        return;
    }
    this->ideas[index] = idea;
}