#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	name ="souchen"; 
	grade=150;

}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade)
{
	this->name = name;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::incrementGrade()
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

std::string const Bureaucrat::getName() const
{
	return this->name;
}

unsigned int Bureaucrat::getGrade() const
{
	return this->grade;
}


std::ostream& operator<<(std::ostream& out, const Bureaucrat& var)
{
	out << var.getName() << ", bureaucrat grade " << var.getGrade();
	return out;
}
