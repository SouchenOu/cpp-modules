/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/07 18:18:05 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"

/*ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("shrubbery", 145, 137)
{
}*/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form(target,"ShrubberyCreation", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& var)
	: Form(var)
{	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& var)
{
	this->Form::operator=(var);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getsignedOuNon() == false)
        throw NotSigned();
    if (this->getGradeExecute() < executor.getGrade())
        throw GradeTooLowException();
    std::string fileTxt = this->getTarget() + "_shrubbery";
    std::ofstream file(fileTxt);
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




