#include <iostream>
#include <fstream>
#include <string>

std::string ft_replace(std::string str, const std::string s1, const std::string s2)
{
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != -1)
    {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
    return (str);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: Invalid Argument count. \nUsage: ./replace <filename> <string1> <string2>" << std::endl;
        return (1);
    }
    else
    {
        const std::string filename = argv[1];
        const std::string s1 = argv[2];
        const std::string s2 = argv[3];
        
        std::string buffer;
        std::ifstream inputfile;
        std::ofstream outputfile;

        inputfile.open(filename);
        if (!inputfile.is_open())
        {
            std::cout << "Error: Could not open file " << filename << std::endl;
            return (1);
        }
        else
        {
            while(std::getline(inputfile, buffer))
            {
                buffer = ft_replace(buffer, s1, s2);
                std::cout << buffer << std::endl;
            }
        }
    }  
}