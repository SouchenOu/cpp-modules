/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 16:56:31 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include "Dog.hpp"

Dog::Dog(std::string Type)  : Animal("Dog")
{
    std::cout<< "Dog constructer!\n";
    (void)Type;
}

Dog::Dog(Dog &var) : Animal("Dog")
{
    std::cout << "Dog copy constructer:!\n";
    (void)var;
}
Dog *Dog::operator=(Dog &var)
{
    (void)var;
    return (this);
}
Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructer!\n";
}

Dog::~Dog()
{
    std::cout<< "Dog Destructer!!\n";
}

void Dog::makeSound(void) const
{
    std::cout << "Howl  Howl  Howl !\n";
}