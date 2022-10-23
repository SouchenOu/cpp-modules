/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 18:07:15 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout<< "Dog constructer called!\n";
}

Dog::Dog(Dog &var)
{
    this->type = var.type;
	this->brain = new Brain();
    //this->brain = var.brain;
    std::cout << "Dog copy constructer called:!\n";
}
Dog &Dog::operator=(Dog &var)
{
    if (&var == this)
        return (*this);
	this->brain = new Brain();
    this->type = var.type;
    return (*this);
}

Dog::~Dog()
{
	delete this->brain;
    std::cout<< "Dog Destructer called!!\n";
}

void Dog::makeSound(void) const
{
    std::cout << "Howl  Howl  Howl !\n";
}
