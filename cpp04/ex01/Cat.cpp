/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 16:52:05 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat constructer called\n";
}

Cat::Cat(Cat &var)
{
	this->brain = new Brain();
    //(this->brain) = (var.brain);
     this->type = var.type;
    std::cout << "Cat copy constructor called" << std::endl;

}

Cat &Cat::operator=(Cat &var)
{
    if (&var == this)
        return (*this);
	this->brain = new Brain();
    this->type = var.type;
    return (*this);
}

Cat::~Cat()
{
	delete this->brain;
    std::cout << "Cat : destructer called\n";
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow Meow!\n";
}
