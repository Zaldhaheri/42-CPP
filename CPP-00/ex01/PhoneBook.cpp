#include "phonebook.hpp"

Phonebook::Phonebook () : _index(0), _count(0) {
    std::cout <<"Construct Phonebook\n";
}

Phonebook::~Phonebook()
{
    std::cout << "Destruct Phonebook\n";
}

Contact::Contact()
{
    std::cout << "Construct Contact\n";
}

Contact::~Contact()
{
    std::cout << "Destruct Contact\n";
}