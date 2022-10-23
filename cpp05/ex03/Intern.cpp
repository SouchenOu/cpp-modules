/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 22:04:03 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <string>

Intern::Intern() {};

Intern::~Intern() {};

Intern::Intern(const Intern &var) {
    (void)var;
};

Intern &Intern::operator=(const Intern &var) {
    (void)var;
    return *this;
};

/*MakeForm est un pointeur de fonction attendant comme paramètres target et renvoyant un pointeur qui point sur un objet de type Form.
Il est possible d'utiliser typedef pour créer un alias du type pointeur de fonction :*/
typedef Form *(*MakeForm)(std::string target);

Form *makeShrubberyForm(std::string target) {
    std::cout << "Intern creates shrubbery creation form\n"; 
    return new ShrubberyCreationForm(target);
}
Form *makePresidentialPardonForm(std::string target) {
    std::cout << "Intern creates presidential pardon form\n"; 
    return new PresidentialPardonForm(target);
}
Form *makeRobotomyRequestForm(std::string target) {
    std::cout << "Intern creates robotomy form\n"; 
    return new RobotomyRequestForm(target);
}

Form *Intern::makeForm(std::string name, std::string target) {
   
    MakeForm forms[3] = {
      makeRobotomyRequestForm,
      makePresidentialPardonForm,
      makeShrubberyForm,
    };
    std::string typesForms[3] = {
        "robotomy request",
        "presidential request",
        "shrubbery request",
    };
    
    for (int i = 0; i < 3 ; i++) {
      if (name == typesForms[i]) return forms[i](target);
    }

    return NULL;
};

