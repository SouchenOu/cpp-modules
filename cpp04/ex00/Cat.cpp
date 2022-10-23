/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 11:40:10 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat : default constructer called\n";
}

Cat::Cat(Cat &var)
{
    this->type = var.type;
    std::cout<< "Cat : Copy constructer called\n";
}

Cat &Cat::operator=(Cat &var)
{
    if (&var == this)
        return (*this);
    this->type = var.type;
    std::cout << "Copy assignment operator called\n";
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat : destructer called\n";
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow Meow!\n";
}