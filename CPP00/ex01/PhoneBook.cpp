#include "PhoneBook.hpp"
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook() : max_contacts(8), current(0), num_contacts(0)
{
}

PhoneBook::~PhoneBook()
{
}


// take fname, lname, nickname, number, secret as input
// add to arr[8]
// num_contacts++
void PhoneBook::add_contact()
{
    std::string fname;
    std::string lname;
    std::string nickname;
    std::string number;
    std::string secret;

    std::cout << "Enter First Name: ";
    std::cin >> fname;
    std::cout << "Enter Last Name: ";
    std::cin >> lname;
    std::cout << "Enter Nickname: ";
    std::cin >> nickname;
    std::cout << "Enter Number: ";
    std::cin >> number;
    std::cout << "Enter Secret: ";
    std::cin >> secret;

    this->arr[this->current].set_fname(fname);
    this->arr[this->current].set_lname(lname);
    this->arr[this->current].set_nickname(nickname);
    this->arr[this->current].set_number(number);
    this->arr[this->current].set_secret(secret);
    this->current++;
    if (num_contacts < 8)
        num_contacts++;
    else
        this->current = 0;
}

std::string formatCol(const std::string str)
{
    const int colSize = 10;
    if (str.length() > colSize)
        return (str.substr(0, colSize - 1) + ".");
    else
        return std::string(colSize - str.length(), ' ') + str;
}


//add function to ask for user input, either next or expand info or back
//if next, clear terminal and print next contact
//when we reach the last contact loop back to first
//if expand, show all the information of that contact
//if back, exit the function
void PhoneBook::search_contact()
{
    int i;
    std::string temp;

    i = 0;
    while (i < this->num_contacts)
    {
        std::cout << formatCol("INDEX") << "|"
              << formatCol("FIRSTNAME") << "|"
              << formatCol("LASTNAME") << "|"
              << formatCol("NUMBER") << "|"
              << std::endl;

        std::ostringstream stream;
        stream << (i + 1);
        temp = stream.str();
        std::cout << formatCol(temp) << "|"
              << formatCol(this->arr[i].get_fname()) << "|"
              << formatCol(this->arr[i].get_lname()) << "|"
              << formatCol(this->arr[i].get_number()) << "|"
              << std::endl;
        i++;
        while (1)
        {
            std::cout << "Enter (n) Next contact, (i) Info contact, (e) exit: ";
            std::cin >> temp;
            if (temp[0] != 'n' && temp[0] != 'i' && temp[0] != 'e')
                std::cout << "Invalid Input\n";
            else
                break ;
        }
        break ;
    }
}