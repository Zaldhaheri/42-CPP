/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:48:44 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/09/28 15:48:44 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

typedef std::string string;

class Fixed
{
    private:
        int fixedPointValue;
        static const int fractBits;

    public:
        Fixed(void);
        Fixed(const Fixed &a);
        Fixed &operator=(const Fixed &a);
        ~Fixed(void);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};