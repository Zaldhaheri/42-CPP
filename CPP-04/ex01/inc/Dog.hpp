#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog();
        Dog(const Dog &d);
        ~Dog();
        Dog &operator=(const Dog &d);
        void makeSound() const;
        void setIdea(int index, const string idea);
        string getIdea(int index) const;
};