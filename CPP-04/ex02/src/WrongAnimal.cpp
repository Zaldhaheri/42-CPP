#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: _type("Default")
{
    std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(string name)
: _type(name)
{
    std::cout << "WrongAnimal Type Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
: _type(a._type)
{
    std::cout << "WrongAnimal Copy Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
    std::cout << "WrongAnimal Copy Assignment Operator" << std::endl;
    if (this != &a)
        this->_type = a._type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}

void WrongAnimal::setType(const string type)
{
    this->_type = type;
}

string WrongAnimal::getType() const
{
    return this->_type;
}