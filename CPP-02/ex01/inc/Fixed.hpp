#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixedPointValue;
        static const int fractBits = 8;
    public:
        Fixed(void);
        Fixed(const int num);
        Fixed(const float num);
        Fixed(const Fixed &a);
        ~Fixed(void);
        Fixed &operator=(const Fixed &a);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);