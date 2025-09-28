/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:49:01 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/09/28 15:49:01 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixedPointValue(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &a)
{
    *this = a;
    std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called\n";
    fixedPointValue = num << fractBits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called\n";
    fixedPointValue = roundf(num * (1 << fractBits));
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
    return (fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(fixedPointValue) / (1 << fractBits);
}

int Fixed::toInt(void) const
{
    return fixedPointValue >> fractBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

