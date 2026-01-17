#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat bob("Bob", 1);
    Bureaucrat jim("Jim", 150);
    Bureaucrat alice("Alice", 25);

    AForm *form1 = new ShrubberyCreationForm(alice);
    AForm *form2 = new RobotomyRequestForm(alice);
    AForm *form3 = new PresidentialPardonForm(bob);

    std::cout << *form1 << std::endl;
    std::cout << *form2 << std::endl;
    std::cout << *form3 << std::endl;

    std::cout << std::endl;
    jim.signForm(*form1);
    jim.executeForm(*form1);
    std::cout << std::endl;
    alice.signForm(*form1);
    alice.executeForm(*form1);
    
    std::cout << std::endl;
    jim.signForm(*form2);
    alice.signForm(*form2);
    alice.executeForm(*form2);

    std::cout << std::endl;
    alice.signForm(*form3);
    alice.executeForm(*form3);
    bob.signForm(*form3);
    bob.executeForm(*form3);

    return 0;
}