#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Bureaucrat bob("Bob", 1);
    Bureaucrat jim("Jim", 150);
    Bureaucrat alice("Alice", 25);
    AForm *rrf;
    try {
        rrf = someRandomIntern.makeForm("robotomy request", bob);
        rrf = someRandomIntern.makeForm("shrubbery creation", alice);
        rrf = someRandomIntern.makeForm("presidential pardon", bob);
        rrf = someRandomIntern.makeForm("invalid form", bob);
    } catch (const Intern::FormNotFoundException &e) {
        std::cerr << e.what() << std::endl;
    }
    bob.signForm(*rrf);
    bob.signForm(*rrf);
    bob.executeForm(*rrf);
    bob.executeForm(*rrf);

    delete rrf;
    return 0;
}