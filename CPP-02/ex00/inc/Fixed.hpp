#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

typedef std::string string;

class Fixed
{
    private:
        int fixedPointValue;
        static const int fractBits;

    public:
        Fixed(void);
        Fixed(Fixed &a);
        Fixed &operator=(const Fixed &a);
        ~Fixed(void);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif