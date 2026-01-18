#pragma once

#include "AForm.hpp"
#include <iostream>
#include <string>

typedef std::string string;

class Intern
{
    public:
        Intern();
        Intern(const Intern &I);
        ~Intern();
        Intern &operator=(const Intern &I);

        AForm *makeForm(const string &formName, Bureaucrat &target);
        AForm *makeShrubberyCreationForm(Bureaucrat &target);
        AForm *makeRobotomyRequestForm(Bureaucrat &target);
        AForm *makePresidentialPardonForm(Bureaucrat &target);

        class FormNotFoundException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};