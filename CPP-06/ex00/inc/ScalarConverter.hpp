#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>

typedef std::string string;

class ScalarConverter
{
    public:
        static void convert(const string &literal);

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ~ScalarConverter();
        ScalarConverter &operator=(const ScalarConverter &other);
};