#include "../inc/Data.hpp"

Data::Data() : _value(0)
{
}

Data::Data(const Data &other)
{
    _value = other._value;
}

Data::~Data()
{
}

Data &Data::operator=(const Data &other)
{
    if (this != &other)
    {
        _value = other._value;
    }
    return *this;
}
