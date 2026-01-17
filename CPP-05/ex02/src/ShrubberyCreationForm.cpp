#include "../inc/AForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat &b) : AForm::AForm("Shrubbery Creation", 145, 137), _b(b)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &p) : AForm::AForm(p), _b(p._b)
{
	*this = p;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &p)
{
	if (this != &p)
		this->_b = p._b;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
    if (b.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    if (!this->getSigned())
        throw std::exception();
    std::ofstream file((this->_b.getName() + "_shrubbery").c_str());
    if (file.is_open())
    {
        file << "                                         ; ; ;						\n"
             << "                           ;        ;  ;     ;;    ;				\n"
             << "                        ;                 ;         ;  ;			\n"
             << "                                        ;							\n"
             << "                                       ;                ;;			\n"
             << "                       ;          ;            ;              ;	\n"
             << "                       ;            ';,        ;'               ;	\n"
             << "                       ;              'b      *'					\n"
             << "                        ;              '$    ;;'                ;;	\n"
             << "                       ;    ;           $:   ;;               ;	\n"
             << "                     ;;      ;  ;;      &;  a):        ;   ; ;		\n"
             << "                                  ;     :@,@):   ,;**:'   ;		\n"
             << "                      ;      ;,         :@@*: ;;**'      ;   ;		\n"
             << "                               ';o;    ;:(@';@*\"'  ;				\n"
             << "                       ;  ;       'bq,;;:,@@*'   ,*      ;  ;		\n"
             << "                                  ,p$q8,:@)'  ;p*'      ;			\n"
             << "                           ;     '  ; '@@Pp@@*'    ;  ;			\n"
             << "                            ;  ; ;;    Y7'.'     ;  ;				\n"
             << "                                      :@):.						\n"
             << "                                     .:@:'.						\n"
             << "                                   .::@:.							\n";
        file.close();
    }
    else
    {
        std::cerr << "Error: Could not create file.\n";
    }
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &p)
{
	out << "ShrubberyCreationForm: " << p.getName() << ", Signed: " << p.getSigned()
	  << ", Sign Grade: " << p.getSignGrade() << ", Execute Grade: " << p.getExecuteGrade();
	return out;
}
