#pragma once

#include "AForm.hpp"
#include <iostream>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
    private :
        Bureaucrat &_b;
    
    public :
        RobotomyRequestForm(Bureaucrat &b);
        RobotomyRequestForm(RobotomyRequestForm const &p);
        ~RobotomyRequestForm();
    
        RobotomyRequestForm &operator=(RobotomyRequestForm const &rSym);

        void execute(Bureaucrat const &b) const;
};

std::ostream &operator<<(std::ostream & out, RobotomyRequestForm const &rSym);