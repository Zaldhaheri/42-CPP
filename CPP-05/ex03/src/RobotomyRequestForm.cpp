#include "../inc/AForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat &b) : AForm::AForm("Robotomy Request", 72, 45), _b(b)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &p) : AForm::AForm(p), _b(p._b)
{
	*this = p;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &p)
{
	if (this != &p)
		this->_b = p._b;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &b) const
{
    if (b.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    if (!this->getSigned())
        throw AForm::FormAlreadySignedException();
    std::cout << "Bzzzzzz... ";
	srand(time(NULL));
    if (rand() % 2 == 0)
        std::cout << this->_b.getName() << " has been robotomized successfully\n";
    else
        std::cout << "The robotomy failed on " << this->_b.getName() << "\n";
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &p)
{
	out << "RobotomyRequestForm: " << p.getName() << ", Signed: " << p.getSigned()
	  << ", Sign Grade: " << p.getSignGrade() << ", Execute Grade: " << p.getExecuteGrade();
	return out;
}
