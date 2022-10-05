/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/05 12:13:53 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name):name(name), gradeSign(1), gradeExecute(1)
{
	this->signedOuNon =false;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExecute)
	: name(name), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	this->signedOuNon =false;
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& var)
	: name(var.name), gradeSign(var.gradeSign), gradeExecute(var.gradeExecute)
{
	this->signedOuNon = var.signedOuNon;
}

Form& Form::operator=(const Form& var)
{
	(void)var;
	return *this;
}

Form::~Form()
{
}

unsigned int Form::getGradeSign() const
{
	return this->gradeSign;
}

unsigned int Form::getGradeExecute() const
{
	return this->gradeExecute;
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getSignedOuNon() const
{
	return this->signedOuNon;
}

void Form::beSigned(const Bureaucrat& candidate)
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
	out << "Form " << var.getName() << ": ";
	out << "signed: " << std::boolalpha << var.getSignedOuNon() << ", gradeSign: " << var.getGradeSign() << ", gradeExec: " << var.getGradeExecute() << "\n";
	return out;
}
