/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/25 10:08:36 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(std::string Type)  : Animal("Dog")
{
    this->brain = new Brain();
    std::cout<< "Dog constructer!\n";
    std::cout << "Dog(\"" << type << "\") constructor called" << "\n";
    (void)Type;
}

Dog::Dog(Dog &var) : Animal("Dog")
{
	this->brain = new Brain();
    std::cout << "Dog copy constructer:!\n";
    (void)var;
}
Dog *Dog::operator=(Dog &var)
{
	this->brain = new Brain();
    (void)var;
    return (this);
}
Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
    std::cout << "Dog default constructer!\n";
}

Dog::~Dog()
{
	delete this->brain;
    std::cout<< "Dog Destructer!!\n";
}

void Dog::makeSound(void) const
{
    std::cout << "Howl  Howl  Howl !\n";
}
