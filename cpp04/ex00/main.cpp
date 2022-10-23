/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 18:00:06 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*int main()
{
  //const Animal* meta = new Animal();
  //const Animal mata;
  //Animal a;
  Dog D1;
  Dog j;
  Cat i;
  Animal *b = &D1;
  const Animal *b = new Animal();
  //const Animal *b = new Dog();
  //b = &i;
  //b = new Cat();
  b->makeSound();//(*b).makeSound()
  D1.makeSound();
  //j.makeSound();
  Animal *A= &j;  //const Animal* A = new Dog();---> This is object
  //int *a=new(5) -----> This is variable int a = 5
  //int b = 5;
  //int *a = &b;
  Animal *B = &i;  //const Animal* B = new Cat();
  std::cout << j.getType() << " " << std::endl;
  std::cout << i.getType() << " " << std::endl;
  std::cout << A->getType() << " " << std::endl;
  i.makeSound(); //will output the cat sound!
  j.makeSound();
  A->makeSound();//((*A).makeSound())
  B->makeSound();

  //-----Wrong animal --------
  std::cout << "Wrong Animal -----------\n";
  //WrongAnimal *Animal = new WrongAnimal();// WrongAnimal Animal
  WrongCat WrongCat1;
  const WrongAnimal *W1 = new WrongCat();// WrongCat *wa = &WrongCat1;
  W1->makeSound();
  WrongCat1.makeSound();
  return 0;
}*/

int main()
{
   const Animal* meta = new Animal();
   const Animal* j = new Dog();
   const Animal* i = new Cat();
   std::cout << j->getType() << " " << std::endl;
   std::cout << i->getType() << " " << std::endl;
   i->makeSound(); //will output the cat sound!
   j->makeSound();
   meta->makeSound();
  
  //system("leaks Animal");
    return 0;
}
