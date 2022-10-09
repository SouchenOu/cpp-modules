/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/07 18:17:57 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"


/*RobotomyRequestForm::RobotomyRequestForm()
	: Form("robotomy", 72, 45)
{
}*/

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form(target, "RobotomyRequest", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: Form(other)
{	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& var)
{
	this->Form::operator=(var);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getsignedOuNon() == false)
        throw NotSigned();
    if (this->getGradeExecute() > executor.getGrade())
        throw GradeTooLowException();
    if (rand() % 2)
        std::cout << this->getTarget() << " successfull\n";
    else
        std::cout << this->getTarget() << " failed\n";
}



