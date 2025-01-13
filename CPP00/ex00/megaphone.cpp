#include <iostream>

void to_upper(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (argv[i])
        {
            to_upper(argv[i]);
            std::cout << argv[i];
            i++;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}