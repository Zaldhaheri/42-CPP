#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

typedef std::string string;

class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();
    public:
        Harl();
        ~Harl();
        void complain(string level);
};




#endif