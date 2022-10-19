/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 17:56:40 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructer called\n";
    this->type = "Dog";
}

Dog::Dog(Dog &var)
{
    this->type = var.type;
    std::cout << "Dog copy constructer:!\n";
}

Dog &Dog::operator=(Dog &var)
{
    if (&var == this)
        return (*this);
    this->type = var.type;
    std::cout << "Dog Copy assignment operator called\n";
    return (*this);
}

Dog::~Dog()
{
    std::cout<< "Dog Destructer called!!\n";
}

void Dog::makeSound(void) const
{
    std::cout << "Howl  Howl  Howl !\n";
}