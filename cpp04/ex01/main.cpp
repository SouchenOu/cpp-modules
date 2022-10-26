/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 15:48:22 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <string>
    
int main()
{
	Animal *animals[10]; // create 10 pointeurs chaque pointeur  pointe sur animal
	for (int i = 0; i < 10; i++)
	{
		if (i <= 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	animals[0] = animals[1];
	
    for(int i = 0; i < 10 ; i++)
	{
		animals[i]->makeSound();
	}
	 //system("leaks Brain");
	for (int i = 0; i < 10; i++)
	{
			delete animals[i]; 
	}
	

	Cat cat1;
	Cat cat2(cat1);
	Animal* A = new Animal();
	std::cout <<  "Her cat 1:" << &(cat1.brain[0]) << "\n";
	std::cout <<  "Her cat 2:" <<&(cat2.brain[0]) << "\n";
	/*std::cout <<  "Her Dog 1:" <<&(d1.brain[0]) << "\n";
	std::cout <<  "Her Dog 2:" <<&(d2.brain[0]) << "\n";*/

}

/*In order to create an interface, we need to create an abstract class which is having only pure virtual methods. In C++, Interfaces are also called pure abstract classes.*/








//the defference between shallow copy and deep copy

//*** Shallow copy:
//In shallow copy, an object is created by simply copying the data of all variables of the original object. This works well if none of the variables of the object are defined in the heap section of memory. 
//Note: C++ compiler implicitly creates a copy constructor and overloads assignment operator in order to perform shallow copy at compile time.
//****Deep copy:
//In Deep copy, an object is created by copying data of all variables,
// and it also allocates similar memory resources with the same value to the object.
// In order to perform Deep copy, we need to explicitly define the copy constructor and 
//assign dynamic memory as well, if required. Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.
//so shallow copy : is when we never written any code to copy objects , the compiler writes the code and this is called as shallow copy
//deep copy : when we will write the code for copying objects manually , then it is going be deep copy

//why we put visrtual destructer:!!

/*Deleting a derived class object using a pointer of base class type that has a non-virtual destructor results is an  undefined behavior.
 To correct this situation, the base class should be defined with a virtual destructor. 
 For example, following program results in undefined behavior. */

