#pragma once

#include "Form.hpp"
#include <string>
#include <iostream>

typedef std::string string;

class Form;

class Bureaucrat {
	private:
		string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(const string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &b);
		string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

		void signForm(Form &f) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);