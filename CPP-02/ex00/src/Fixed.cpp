/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:48:49 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/09/28 15:48:49 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed() : fixedPointValue(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &a)
{
    *this = a;
    std::cout << "Copy constructor called\n";
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &a)
{
    if (this != &a)
        fixedPointValue = a.getRawBits();
    std::cout << "Copy assignment operator called\n";
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    fixedPointValue = raw;
}