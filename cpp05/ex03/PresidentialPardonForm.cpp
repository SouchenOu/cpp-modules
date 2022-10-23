/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 21:30:14 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form(target, 25, 5)
{
    this->target = target;
    std::cout<< "PresidentialPardonForm constructer called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& var)
	: Form(var)
{	
        std::cout<< "PresidentialPardonForm copy constructer called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& var)
{
    std::cout<< "PresidentialPardonForm Copy assignment operator called" << "\n";
	Form::operator=(var);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructer called\n" << "\n";
}

std::string PresidentialPardonForm::getTarget() const
{
    return target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getSignedOuNon() == false)
        throw NotSigned();
     if (this->getGradeExecute() < executor.getGrade())
        throw GradeTooLowException();
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}