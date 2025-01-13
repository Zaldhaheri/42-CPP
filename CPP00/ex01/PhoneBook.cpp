#include "PhoneBook.hpp"

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
    std::cout << "\nEnter Last Name: ";
    std::cin >> lname;
    std::cout << "\nEnter Nickname: ";
    std::cin >> nickname;
    std::cout << "\nEnter Number: ";
    std::cin >> number;
    std::cout << "\nEnter Secret: ";
    std::cin >> secret;

    this->arr[this->current].set_fname(fname);
    this->arr[this->current].set_lname(lname);
    this->arr[this->current].set_nickname(nickname);
    this->arr[this->current].set_number(number);
    this->arr[this->current].set_secret(secret);
    this->current++;
    if (num_contacts < 8)
        num_contacts++;
}

void PhoneBook::search_contact()
{
    std::cout << "hello";
}