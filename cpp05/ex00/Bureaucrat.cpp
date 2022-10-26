/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 14:11:41 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("souchen")
{
	std::cout << "Bureaucrat Default constructer called\n";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade):name(name)
{
	std::cout << "Bureaucrat constructer called\n";
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &var)
{
	std::cout<< "Bureaucrat copy constructer called\n";
   if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = var.grade;
	std::cout << "grade here =" << this->grade << "\n";
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &x)
{
	std::cout<< "Bureaucrat Copy assignment operator called" << "\n";
   if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = x.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructer called\n";
}

void Bureaucrat::incrementGrade()
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
}

void Bureaucrat::decrementGrade()
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string const Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}


std::ostream& operator<<(std::ostream& out, const Bureaucrat& var)
{
	out << var.getName() << ", bureaucrat grade " << var.getGrade();
	return out;
}

/*In C++, stream insertion operator “<<” is used for output and extraction operator “>>” is used for input. 
We must know the following things before we start overloading these operators. 
1) cout is an object of ostream class and cin is an object of istream class 
2) These operators must be overloaded as a global function. And if we want to allow them to access private data members of the class, we must make them friend. */
