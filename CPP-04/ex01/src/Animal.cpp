#include "../inc/Animal.hpp"

Animal::Animal()
: _type("Default")
{
    std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(string name)
: _type(name)
{
    std::cout << "Animal Type Constructor" << std::endl;
}

Animal::Animal(const Animal &a)
: _type(a._type)
{
    std::cout << "Animal Copy Constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &a)
{
    std::cout << "Animal Copy Assignment Operator" << std::endl;
    if (this != &a)
        this->_type = a._type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}

void Animal::setType(const string type)
{
    this->_type = type;
}

string Animal::getType() const
{
    return this->_type;
}