#include <iostream>
#include <iomanip>



int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of string:      " << &str << "\n";
	std::cout << "Memory address of stringPTR:   " << &stringPTR << "\n";
	std::cout << "Memory address of stringREF:   " << &stringREF << "\n";
	std::cout << "\n";
	std::cout << "Value of string:               " << str << "\n";
	std::cout << "Value pointed to by stringPTR: " << stringPTR << "\n";
	std::cout << "Value pointed to by stringREF: " << stringREF << "\n";
}