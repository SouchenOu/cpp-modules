/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 09:51:03 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():name("Test"), gradeSign(0), gradeExecute(0)
{
	std::cout << "Form default constructer called\n";
	this->signedOuNon =false;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExecute)
	: name(name), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	std::cout << "Form constructer called\n";
	this->signedOuNon = false;
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& var)
	: name(var.name), gradeSign(var.gradeSign), gradeExecute(var.gradeExecute)
{
	std::cout << "Form Copy constructer called\n";
	this->signedOuNon = var.signedOuNon;
}

Form& Form::operator=(const Form& var)
{
	std::cout<< "Form Copy assignment operator called" << "\n";
	this->signedOuNon = var.signedOuNon;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructer called\n";
}

int Form::getGradeSign() const
{
	return this->gradeSign;
}

int Form::getGradeExecute() const
{
	return this->gradeExecute;
}

std::string const Form::getName() const
{
	return this->name;
}

bool Form::getSignedOuNon() const
{
	return this->signedOuNon;
}

void Form::beSigned(Bureaucrat& candidate)
{
	if (this->signedOuNon == false)
	{
		if (candidate.getGrade() <= this->gradeSign)
			this->signedOuNon = true;
		else{
			throw Form::GradeTooLowException();
		}
	}
}

std::ostream& operator<<(std::ostream& out, const Form& var)
{
	out << "Form :" << var.getName();
	out << " ,signed  " <<  var.getSignedOuNon() << ", gradeSign: " << var.getGradeSign() << ", gradeExec: " << var.getGradeExecute() << "\n";
	return out;
}


//When a function is declared as const, it can be called on any type of object. Non-const functions can only be called by non-const objects. 