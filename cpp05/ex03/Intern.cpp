/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/25 13:28:53 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <string>

Intern::Intern() {

    std::cout<< "Intern default constructer called\n";
};

Intern::~Intern() {

    std::cout << "Intern destructer called\n" << "\n";
};

Intern::Intern(const Intern &var) {
    (void)var;
        std::cout<< "Intern copy constructer called\n";
};

Intern &Intern::operator=(const Intern &var) {
    (void)var;
    std::cout<< "Intern Copy assignment operator called" << "\n";
    return *this;
};

/*MakeForm est un pointeur de fonction attendant comme paramètres target et renvoyant un pointeur qui point sur un objet de type Form.
Il est possible d'utiliser typedef pour créer un alias du type pointeur de fonction :*/
typedef Form *(*Make)(std::string target);

Form *makeShrubberyForm(std::string target) { // pointer to object
    std::cout << "Intern creates shrubberyCreation form\n"; 
    return new ShrubberyCreationForm(target);
}
Form *makePresidentialPardonForm(std::string target) {
    std::cout << "Intern creates presidentialPardon form\n"; 
    return new PresidentialPardonForm(target);
}
Form *makeRobotomyRequestForm(std::string target) {
    std::cout << "Intern creates robotomyRequest form\n"; 
    return new RobotomyRequestForm(target);
}

Form *Intern::makeForm(std::string name, std::string target) {
   
    Make forms[3] = {
      &makeRobotomyRequestForm,
      &makePresidentialPardonForm,
      &makeShrubberyForm,
    };
    std::string typesForms[3] = {
        "robotomy request",
        "presidential request",
        "shrubbery request",
    };
    
    for (int i = 0; i < 3 ; i++) {
        if (name == typesForms[i])
            return (*forms[i])(target);
    }

    return NULL;
};

