#include "Contact.hpp"

Contact::Contact(void)
{
    _fname = "hello";
    _lname = "world";
    _number = "00000";
}

Contact::Contact(std::string fname, std::string lname, std::string number)
{
    _fname = fname;
    _lname = lname;
    _number = number;
}