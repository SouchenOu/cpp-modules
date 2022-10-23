/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 17:03:21 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(std::string Type);
        Animal(Animal &var);
        Animal();
        ~Animal();
        Animal &operator=(Animal &x);
        std::string getType(void) const;
        void setType(std::string Type);
        void virtual makeSound(void) const;
};

//what is polymorphism : 
//A virtual function in C++ is a base class member function that you can redefine in a derived class to achieve polymorphism. 
//A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. 
//The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. 

//*******There two types of polymorphism:
//1:Compile-time Polymorphism.
//A. Function Overloading
//--When there are multiple functions with the same name but different parameters,then the functions are said to be overloaded*/
//B. Operator Overloading
//2 Runtime Polymorphism.
//A. Function Overriding
//--Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.



