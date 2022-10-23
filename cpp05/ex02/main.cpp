/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 21:21:19 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
/*int main() {
  std::cout << "test1 : \n";
      //ShrubberyCreationForm S1("sh");
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


}*/
int main()
{
    try{
        Bureaucrat candida1("Ahmed", 80); //grade = 140
        Form *f1 = new ShrubberyCreationForm("shrub1");
        Form *f2 = new RobotomyRequestForm("Robo1");
        Form *f3 = new PresidentialPardonForm("Pri1");
        /*std::cout << f->getName() << "\n";
        std::cout << f->getGradeSign()<< "\n";
        std::cout << f->getGradeExecute()<< "\n";*/
        candida1.signForm(*f1);
        candida1.executeForm(*f1);
        /*******Second form*/
        candida1.signForm(*f2);
        candida1.executeForm(*f2);
        /********Third form*******/
        candida1.signForm(*f3);
        candida1.executeForm(*f3);
        delete f1;
        delete f2;
        delete f3;
    }catch(std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
   return 0;
}