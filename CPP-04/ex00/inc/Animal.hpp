#pragma once

#include <iostream>

typedef std::string string;

class Animal
{
    protected:
        string _type;

    public:
        Animal();
        Animal(string name);
        Animal(const Animal &a);
        ~Animal();
        Animal &operator=(const Animal &a);
        void makeSound();
        void setType(const string type);
        string getType() const;
};