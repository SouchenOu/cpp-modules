/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/19 11:59:03 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <string>
    
/*int main()
{
	Animal* animals[10];
	
	for (int i = 0; i < 10; i++)
	{
		if (i >= 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	// system("leaks Animals");
}*/


//the defference between shallow copy and deep copy

//*** Shallow copy:
//In shallow copy, an object is created by simply copying the data of all variables of the original object. This works well if none of the variables of the object are defined in the heap section of memory. 
//Note: C++ compiler implicitly creates a copy constructor and overloads assignment operator in order to perform shallow copy at compile time.
//****Deep copy:
//In Deep copy, an object is created by copying data of all variables,
// and it also allocates similar memory resources with the same value to the object.
// In order to perform Deep copy, we need to explicitly define the copy constructor and 
//assign dynamic memory as well, if required. Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.



class A{
	public:
		int a;
		std::string b;
	
		A();
		A(int a, std::string b);
		void getvalue(int a, std::string b);
		void Display();
		A(A const &var);
	
};

A::A()
{
	//doesnt point to anyThing
	this->a = 0;
	this->b = "hello";
}
A::A(int a, std::string b)
{
	this->a = a;
	this->b = b;
}
void A::getvalue(int a, std::string b)
{
	this->a = a;
	this->b = b;
	
}
void A::Display()
{
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
}

/*A::A(A const &var)
{
	*(this->a) = *(var.a);
	this->b = var.b;
}*/
int main()
{
	A test1(12,"Bobby"); 
	A test2(13,"Julli");
	

	/*test2 = test1; // assignement operater
	test1.Display();
	test2.Display();*/
	A test4; // we never written any code to copy objects, the compiler writes the code and this is called as shallow copy
	test4.getvalue(10,"test11");
	A test3 = test4; // copy constructer
	test3.Display();
	test4.Display();
	
}


//so shallow copy : is when we never written any code to copy objects , the compiler writes the code and this is called as shallow copy
//deep copy : when we will write the code for copying objects manually , then it is going be deep copy