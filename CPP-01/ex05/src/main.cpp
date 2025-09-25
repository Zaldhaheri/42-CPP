#include "Harl.hpp"

int main()
{
    Harl harl;
    int i;
    string input;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    i = 0;
    while (i < 5)
    {
        std::cout << "Input: ";
        std::cin >> input;
        harl.complain(input);
        i++;
    }
    return 0;
}
