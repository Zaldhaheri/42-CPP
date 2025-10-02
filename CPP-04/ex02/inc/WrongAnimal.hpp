#pragma once

#include <iostream>
#include <string>

typedef std::string string;

class WrongAnimal
{
    protected:
        string _type;

    public:
        WrongAnimal();
        WrongAnimal(string name);
        WrongAnimal(const WrongAnimal &wa);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &wa);
        void makeSound() const;
        void setType(const string type);
        string getType() const;
};