#include "../inc/Dog.hpp"

Dog::Dog()
: Animal("Dog")
{
    std::cout << "Dog Default Constructor" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &c)
: Animal(c)
{
    std::cout << "Dog Copy Constructor" << std::endl;
    this->brain = new Brain(*c.brain);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(const Dog &c)
{
    std::cout << "Dog Copy Assignment Operator" << std::endl;
    if (this != &c)
    {
        this->_type = c._type;
        *this->brain = *c.brain;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

void Dog::setIdea(int index, const string idea)
{
    this->brain->setIdea(index, idea);
}

string Dog::getIdea(int index) const
{
    return this->brain->getIdea(index);
}