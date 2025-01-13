#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_fname(void)
{
    return (this->fname);
}

std::string Contact::get_lname(void)
{
    return (this->lname);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_number(void)
{
    return (this->number);
}

std::string Contact::get_secret(void)
{
    return (this->secret);
}

void Contact::set_fname(std::string fname)
{
    this->fname = fname;
}

void Contact::set_lname(std::string lname)
{
    this->lname = lname;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::set_number(std::string number)
{
    this->number = number;
}

void Contact::set_secret(std::string secret)
{
    this->secret = secret;
}