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

        bool operator>(const Fixed &a);
        bool operator<(const Fixed &a);
        bool operator>=(const Fixed &a);
        bool operator<=(const Fixed &a);
        bool operator==(const Fixed &a);
        bool operator!=(const Fixed &a);

        Fixed operator+(const Fixed &a);
        Fixed operator-(const Fixed &a);
        Fixed operator*(const Fixed &a);
        Fixed operator/(const Fixed &a);

        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);