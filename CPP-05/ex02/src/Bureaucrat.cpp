#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) 
{}

Bureaucrat::Bureaucrat(const string name, int grade) : _name(name), _grade(grade) 
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name), _grade(b._grade) 
{}

Bureaucrat::~Bureaucrat() 
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b) 
{
    if (this != &b) {
        this->_grade = b._grade;
    }
    return *this;
}

string Bureaucrat::getName() const 
{
    return _name;
}

int Bureaucrat::getGrade() const 
{
    return _grade;
}

void Bureaucrat::incrementGrade() 
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade() 
{
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm(AForm &f) const 
{
    try {
        f.beSigned(*this);
        std::cout << _name << " signed " << f.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cout << _name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const AForm &f) const 
{
    try {
        f.execute(*this);
        std::cout << _name << " executed " << f.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cout << _name << " couldn't execute " << f.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b) 
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "Grade is too low!";
}

