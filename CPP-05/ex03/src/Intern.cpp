#include "../inc/Intern.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &I)
{
    *this = I;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &I)
{
    (void)I;
    return *this;
}

AForm *Intern::makeForm(const string &formName, Bureaucrat &target)
{
    const string forms[3] =
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm *(Intern::*formMakers[3])(Bureaucrat &) =
    {
        &Intern::makeShrubberyCreationForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makePresidentialPardonForm
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == forms[i])
        {
            std::cout << "Intern creates " << formName << " form." << std::endl;
            return (this->*formMakers[i])(target);
        }
    }
    throw Intern::FormNotFoundException();
    return NULL;
}

AForm *Intern::makeShrubberyCreationForm(Bureaucrat &target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(Bureaucrat &target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(Bureaucrat &target)
{
    return new PresidentialPardonForm(target);
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return "Error: Form not found.";
}