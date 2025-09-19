#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
    std::cout << "[DEBUG]\tI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info()
{
    std::cout << "[INFO]\tI cannoot believe addingg extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning()
{
    std::cout << "[WARNING]\tI think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n";
}

void Harl::error() 
{
    std::cout << "[ERROR]\tThis is unnacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(string level)
{
    int i = 0;

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    while (i < 4)
    {
        if (level == levels[i])
        {
            (this->*fptr[i])();
            break;
        }
        i++;
    }
}

