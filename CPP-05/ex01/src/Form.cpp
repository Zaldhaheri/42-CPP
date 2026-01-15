#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _signGrade(150), _executeGrade(150) {}

Form::Form(const string name, int signGrade, int executeGrade)
    : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &f)
    : _name(f._name), _signed(f._signed), _signGrade(f._signGrade), _executeGrade(f._executeGrade) {}

Form::~Form() {}

Form &Form::operator=(const Form &f) {
    if (this != &f) {
        this->_signed = f._signed;
    }
    return *this;
}

string Form::getName() const {
    return _name;
}

bool Form::getSigned() const {
    return _signed;
}

int Form::getSignGrade() const {
    return _signGrade;
}

int Form::getExecuteGrade() const {
    return _executeGrade;
}

void Form::beSigned(const Bureaucrat &b) {
    if (b.getGrade() > _signGrade)
        throw GradeTooLowException();
    if (_signed)
        throw FormAlreadySignedException();
    _signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

const char *Form::FormAlreadySignedException::what() const throw() {
    return "Form is already signed!";
}

std::ostream &operator<<(std::ostream &out, const Form &f) {
    out << "Form " << f.getName() << ", signed: " << (f.getSigned() ? "true" : "false")
        << ", sign grade: " << f.getSignGrade() << ", execute grade: " << f.getExecuteGrade();
    return out;
}

