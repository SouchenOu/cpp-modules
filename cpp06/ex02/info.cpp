/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/10 13:58:29 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info.hpp"
#include "time.h"
//We cant use dynamic-cast until we have virtual function in base class 
Base * generate(void)
{
    //The function srand() is used to initialize the generated pseudo random number by rand() function. It does not return anything.
    //srand(time(0)) is used in C++ to help in the generation of random numbers by seeding rand with a starting value.
    switch (rand() % 3)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        default:
            return new C();
    }
    return (NULL);
}

void identify(Base* p)
{
    /**If the cast is successful, dynamic_cast returns a value of type new-type.
     *  If the cast fails and new-type is a pointer type, 
      it returns a null pointer of that type. 
      If the cast fails and new-type is a reference type, 
      it throws an exception that matches a handler of type std::bad_cast.*/
  if (dynamic_cast<A*>(p) != nullptr) 
    std::cout << "Type is A\n";
  else if (dynamic_cast<B*>(p) != nullptr) 
    std::cout << "Type is B\n";
  else if (dynamic_cast<C*>(p) != nullptr) 
    std::cout << "Type is C\n";
};

void identify(Base& p)
{
    try {
        Base test1 = dynamic_cast<A&>(p);
        std::cout<< "p here :" << &p << "\n";
        std::cout<< "test here :" << &test1 << "\n";
        std::cout << "Type is A\n";
        //If the cast fails and new_type is a pointer type, it returns a null pointer of that type.
    } catch (std::exception &e) {
        try 
        {
            Base test2 = dynamic_cast<B&>(p);
            std::cout << "Type is B\n";
        } 
        catch (std::exception &e) 
        {
              try 
              {
                  Base test3 = dynamic_cast<C&>(p);
                  std::cout << "Type is C\n";
              } 
              catch (std::exception &e) 
              {
                  std::cout << e.what() << '\n'; 
              }  
        }  
    }  

}
