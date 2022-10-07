/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/07 19:07:39 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : name(""), signedOuNon(0), gradeSign(1), gradeExecute(1)
{
}

/*Form::Form(const std::string name):name(name), gradeSign(1), gradeExecute(1)
{
	this->signedOuNon =false;
}*/

Form::Form(std::string target, std::string name, int gradeSign, int gradeExecute)
	: target(target),name(name),signedOuNon(0), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	//this->signedOuNon =false;
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

std::string Form::getTarget(void) const
{
    return (this->target);
}

int Form::getGradeSign() const
{
	return this->gradeSign;
}

int Form::getGradeExecute() const
{
	return this->gradeExecute;
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getsignedOuNon(void) const
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
	out << "signed: " << std::boolalpha << var.getsignedOuNon() << ", gradeSign: " << var.getGradeSign() << ", gradeExec: " << var.getGradeExecute() << "\n";
	return out;
}
