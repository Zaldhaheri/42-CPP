#pragma once

#include <iostream>

typedef std::string string;

class Animal
{
    protected:
        string _type;
        Animal();

    public:
        Animal(string name);
        Animal(const Animal &a);
        virtual ~Animal();
        Animal &operator=(const Animal &a);
        virtual void makeSound() const = 0;
        void setType(const string type);
        string getType() const;
};