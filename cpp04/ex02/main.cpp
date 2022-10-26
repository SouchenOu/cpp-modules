/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 15:47:12 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

   
	const Animal* ANI1  = new Animal();
	Cat cat;
	Animal *A = &cat;
    const Animal* ANI2 = new Dog();
	Dog dog;
	Animal *B = &dog;
    std::cout << ANI1->getType() << "\n";
    std::cout << ANI2->getType() <<  "\n";
    ANI1->makeSound();
    ANI2->makeSound();
	A->makeSound();
	B->makeSound();
    delete ANI1;
    delete ANI2;
    return 0;

}

