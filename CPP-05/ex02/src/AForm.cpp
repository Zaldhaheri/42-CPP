#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _signGrade(150), _executeGrade(150) {}

AForm::AForm(const string name, int signGrade, int executeGrade)
    : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &f)
    : _name(f._name), _signed(f._signed), _signGrade(f._signGrade), _executeGrade(f._executeGrade) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &f) {
    if (this != &f) {
        this->_signed = f._signed;
    }
    return *this;
}

string AForm::getName() const {
    return _name;
}

bool AForm::getSigned() const {
    return _signed;
}

int AForm::getSignGrade() const {
    return _signGrade;
}

int AForm::getExecuteGrade() const {
    return _executeGrade;
}

void AForm::beSigned(const Bureaucrat &b) {
    if (b.getGrade() > _signGrade)
        throw GradeTooLowException();
    if (_signed)
        throw FormAlreadySignedException();
    _signed = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

const char *AForm::FormAlreadySignedException::what() const throw() {
    return "AForm is already signed!";
}

std::ostream &operator<<(std::ostream &out, const AForm &f) {
    out << "AForm " << f.getName() << ", signed: " << (f.getSigned() ? "true" : "false")
        << ", sign grade: " << f.getSignGrade() << ", execute grade: " << f.getExecuteGrade();
    return out;
}

