/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/09 09:53:01 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
int main() {
  std::cout << "test1 : \n";
      ShrubberyCreationForm S1("sh");
      Bureaucrat b1("candid1", 139);
      b1.executeForm(S1);

      Bureaucrat b2("candid2", 140);
      S1.beSigned(b2);
      b2.executeForm(S1);
      b1.executeForm(S1);

std::cout << "test2: \n";
      Bureaucrat b4("candid3", 5);
      PresidentialPardonForm P1 ("pres");
      P1.beSigned(b4);
      b4.executeForm(P1);

  std::cout << "test3 : \n";
      Bureaucrat b3("candid4", 20);
      RobotomyRequestForm R1("Ro");
      R1.beSigned(b3);
      b3.executeForm(R1);


}