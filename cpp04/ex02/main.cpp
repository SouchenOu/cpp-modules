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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
    
int main()
{
	Animal* animals[10];
	
	for (int i = 0; i < 10; i++)
	{
		if (i >= 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	/*Cat copy(*(Cat *)animals[0]);
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << std::setw(30) << std::left << copy.getBrain()->getIdea(i);
		std::cout << std::setw(30) << std::left << ((Cat *)animals[0])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;*/
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	// system("leaks Animals");
}
