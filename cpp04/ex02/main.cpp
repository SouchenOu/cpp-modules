/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 18:28:18 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

    

	
int main()
{

	const Animal* ANI1 = new Cat();
    	const Animal* ANI2 = new Dog();
    	std::cout << ANI1->getType() << "\n";
    	std::cout << ANI2->getType() <<  "\n";
    	ANI1->makeSound();
    	ANI2->makeSound();
    	return 0;

}
