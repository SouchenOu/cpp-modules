/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 14:12:47 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() :name("souchen")
{
	std::cout << "Default constructer called\n";
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
   if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = var.grade;
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
void Bureaucrat::signForm(Form& f)
{
	try 
	{
		f.beSigned(*this);
		std::cout << this->name << " signed " << f.getName() << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << Bureaucrat::getName() << " couldn't sign " << f.getName() << " " << e.what() << "\n";
	}
}
