/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/20 18:22:04 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club1 = Weapon("crude spiked club");
    HumanA bob("Bob", club1);
    bob.attack();
    club1.setType("some other type of club");
    bob.attack();
    
    Weapon club2 = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.HumanB::setWeapon(club2);
    jim.attack();
    club2.setType("some other type of club");
    jim.attack();
    return 0;
}


/*int squareConst(const int number) {
   // number *= number;  // error: assignment of read-only parameter
   return number * number;
}
 
int squareNonConst(int number) {  // non-const parameter
   number *= number;
   return number;
}
 
int squareConstRef(const int *number) {  // const reference
   return (*number) * (*number);
}
 
int squareNonConstRef(int & number) {  // non-const reference
   return number * number;
}*/

/*int main() {
   const int number = 8;
   //number = 6;
   //std::cout<< number << "\n";
   //const int constNumber = 9;
   //std::cout << squareConst(number) << std::endl;
   //std::cout << squareConst(constNumber) << std::endl;
   //std::cout << squareNonConst(number) << std::endl;
   //std::cout << squareNonConst(constNumber) << std::endl;
 
   std::cout << squareConstRef(&number) << std::endl;
   //std::cout << squareConstRef(constNumber) << std::endl;
   //std::cout << squareNonConstRef(number) << std::endl;
 //std::cout << squareNonConstRef(constNumber) << std::endl;
       // error: invalid initialization of reference of
       //  type 'int&' from expression of type 'const int'
}*/
