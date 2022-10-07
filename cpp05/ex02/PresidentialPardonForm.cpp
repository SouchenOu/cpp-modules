/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/07 18:16:00 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/*PresidentialPardonForm::PresidentialPardonForm()
	: Form("pardon", 25, 5)
{
}*/
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form(target , "PresidentialPardon", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& var)
	: Form(var)
{	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& var)
{
	this->Form::operator=(var);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}



void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getsignedOuNon() == false)
        throw NotSigned();
    if (this->getGradeExecute() < executor.getGrade())
        throw GradeTooLowException();
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}

