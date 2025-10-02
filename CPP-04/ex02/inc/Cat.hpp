#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;

    public:
        Cat();
        Cat(const Cat &c);
        ~Cat();
        Cat &operator=(const Cat &c);
        void makeSound() const;
        void setIdea(int index, const string idea);
        string getIdea(int index) const;
};