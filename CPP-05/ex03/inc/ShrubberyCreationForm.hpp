#pragma once

#include "AForm.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private :
        Bureaucrat &_b;
    
    public :
        ShrubberyCreationForm(Bureaucrat &b);
        ShrubberyCreationForm(ShrubberyCreationForm const &p);
        ~ShrubberyCreationForm();
    
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rSym);

        void execute(Bureaucrat const &b) const;
};

std::ostream &operator<<(std::ostream & out, ShrubberyCreationForm const &rSym);