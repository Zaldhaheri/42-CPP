#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

typedef std::string string;

class Bureaucrat;

class AForm
{
    private:
        const string _name;
        bool _signed;
        const int _signGrade;
        const int _executeGrade;
    public:
        AForm();
        AForm(const string name, int signGrade, int executeGrade);
        AForm(const AForm &f);
        virtual ~AForm();
        AForm &operator=(const AForm &f);
        
        string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void beSigned(const Bureaucrat &b);
        virtual void execute(Bureaucrat &b) const = 0;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        class FormAlreadySignedException : public std::exception {
            public :
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const AForm &f);
