/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/25 12:29:22 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form(target, 145, 137)
{
    this->target = target;
    std::cout<< "ShrubberyCreationForm constructer called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& var) : Form(var)
{	
    this->target = var.target;
    std::cout<< "ShrubberyCreationForm copy constructer called\n";

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& var)
{
    std::cout<< "ShrubberyCreationForm Copy assignment operator called" << "\n";
    this->target = var.target;
	Form::operator=(var);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructer called\n" << "\n";
}

std::string ShrubberyCreationForm::getTarget() const
{
    return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSignedOuNon() == false)
        throw NotSigned();
    if (this->getGradeExecute() < executor.getGrade())
        throw GradeTooLowException();
    std::string fileTxt = getTarget() + "_shrubbery";
    std::ofstream file(fileTxt);
    if(file.is_open())
    {
        file << "                .        +          .      .          .\n";
        file << "         .            _        .                    .\n";
        file << "    ,              /;-._,-.____        ,-----.__\n";
        file << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n";
        file << "                             _|=:_::..);   __/ /     \n";
        file << "                 ,    `./ . `.   )==-'  .\n";
        file << "           .      ., ,-=-.  , +#./`  .  / /  \n";
        file << "              .         :/`-' , , '` ` `   ): , /_  -\n";
        file << "                       .    /:+- - + +- : :- + + -:'  /(o-)  .\n";
        file << "                       .   ,=':  ` `/` ' , , ,:' `'--""---._/`7\n";
        file << "              `.   (   -._` ` +  ,  _,--._,--:.__/\n";
        file << "                         X` _| _,   .-'\n";
        file << "                       :._:`___  /:'  /.     .\n";
        file << "                         :.  ::' \n";
	    file << "                         :.  ::'\n";
	    file << "                         :.  ::'  /  +\n";
	    file << "                         :.  ::'\n";
	    file << "                         :.  ::'\n";
	    file << "                         :.  ::' \n";
    }
}
    
    




