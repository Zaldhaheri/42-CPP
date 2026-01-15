#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

typedef std::string string;

class Bureaucrat;

class Form {
    private:
        const string _name;
        bool _signed;
        const int _signGrade;
        const int _executeGrade;
    public:
        Form();
        Form(const string name, int signGrade, int executeGrade);
        Form(const Form &f);
        ~Form();

        Form &operator=(const Form &f);
        string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        void beSigned(const Bureaucrat &b);

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

std::ostream &operator<<(std::ostream &out, const Form &f);
