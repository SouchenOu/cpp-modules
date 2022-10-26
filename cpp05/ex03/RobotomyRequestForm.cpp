/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/25 12:45:20 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"



RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form(target, 72, 45)
{
    this->target = target;
    std::cout<< "RobotomyRequestForm constructer called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: Form(other)
{	
        std::cout<< "RobotomyRequestForm copy constructer called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& var)
{
    std::cout<< "RobotomyRequestForm Copy assignment operator called" << "\n";
	Form::operator=(var);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
     std::cout << "RobotomyRequestForm destructer called\n" << "\n";
}


std::string RobotomyRequestForm::getTarget() const
{
    return target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSignedOuNon() == false)
        throw NotSigned();
     if (this->getGradeExecute() < executor.getGrade())
        throw GradeTooLowException();
    if (rand() % 2)
        std::cout << this->getTarget() << " successfull\n";
    else
        std::cout << this->getTarget() << " failed\n";
}



