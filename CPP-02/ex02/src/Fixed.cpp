/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:49:10 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/09/28 15:49:10 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixedPointValue(0)
{
}

Fixed::Fixed(const Fixed &a) : fixedPointValue (a.fixedPointValue)
{
}

Fixed::Fixed(const int num) : fixedPointValue(num << fractBits)
{
}

Fixed::Fixed(const float num) : fixedPointValue(roundf(num * (1 << fractBits)))
{
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &a)
{
    if (this != &a)
        fixedPointValue = a.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed &a)
{
    return fixedPointValue > a.fixedPointValue;
}
bool Fixed::operator<(const Fixed &a)
{
    return fixedPointValue < a.fixedPointValue;
}
bool Fixed::operator>=(const Fixed &a)
{
    return fixedPointValue >= a.fixedPointValue;
}
bool Fixed::operator<=(const Fixed &a)
{
    return fixedPointValue <= a.fixedPointValue;
}
bool Fixed::operator==(const Fixed &a)
{
    return fixedPointValue == a.fixedPointValue;
}

bool Fixed::operator!=(const Fixed &a)
{
    return fixedPointValue != a.fixedPointValue;
}

Fixed Fixed::operator+(const Fixed &a)
{
    Fixed r;

    r.setRawBits(fixedPointValue + a.fixedPointValue);
    return r;
}

Fixed Fixed::operator-(const Fixed &a)
{
    Fixed r;

    r.setRawBits(fixedPointValue - a.fixedPointValue);
    return r;
}

Fixed Fixed::operator*(const Fixed &a)
{
    Fixed r;

    r.setRawBits(fixedPointValue * a.fixedPointValue >> fractBits);
    return r;
}

Fixed Fixed::operator/(const Fixed &a)
{
    Fixed r;

    r.setRawBits(fixedPointValue * (1 << fractBits) / a.fixedPointValue);
    return r;
}

Fixed &Fixed::operator++(void)
{
    fixedPointValue++;
    return *this;
}

Fixed &Fixed::operator--(void)
{
    fixedPointValue--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp;

    temp = *this;
    ++(*this);
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp;
    
    temp = *this;
    --(*this);
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a > b)
        return b;
    return a;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.fixedPointValue > b.fixedPointValue)
        return b;
    return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.fixedPointValue > b.fixedPointValue)
        return a;
    return b;
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

