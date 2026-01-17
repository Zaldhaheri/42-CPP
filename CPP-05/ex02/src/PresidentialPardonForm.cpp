#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat &b) : AForm::AForm("Presidential Pardon", 25, 5), _b(b)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &p) : AForm::AForm(p), _b(p._b)
{
    *this = p;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &p)
{
    if (this != &p)
        this->_b = p._b;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &b) const
{
    if (b.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    if (!this->getSigned())
        throw std::exception();
    std::cout << this->_b.getName() << " has been pardoned by Zaphod Beeblebrox\n";
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &p)
{
    out << "PresidentialPardonForm: " << p.getName() << ", Signed: " << p.getSigned()
      << ", Sign Grade: " << p.getSignGrade() << ", Execute Grade: " << p.getExecuteGrade();
    return out;
}
