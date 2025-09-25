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