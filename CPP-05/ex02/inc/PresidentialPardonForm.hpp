#pragma once

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
    private :
        Bureaucrat &b;
    
    public :
        PresidentialPardonForm(Bureaucrat &b);
        PresidentialPardonForm(PresidentialPardonForm const &p);
        ~PresidentialPardonForm();
    
        PresidentialPardonForm & operator=(PresidentialPardonForm const &rSym);

        void beSigned(Bureaucrat &b);
        void execute(Bureaucrat &b) const;
};

std::ostream &operator<<(std::ostream & o, PresidentialPardonForm const &rSym);