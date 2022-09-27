/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/27 10:04:33 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(std::string Type)  : Animal("Cat")
{
    this->brain = new Brain();
   	std::cout << "Cat(\"" << Type << "\") constructor called" << "\n";
}

Cat::Cat(Cat &var) : Animal("Cat")
{
	this->brain = new Brain();
    std::cout << "Cat copy constructor called on " << var.type << std::endl;

}
Cat *Cat::operator=(Cat &var)
{
	this->brain = new Brain();
    (void)var;
    return (this);
}
Cat::Cat() : Animal("Cat")
{
	 this->brain = new Brain();
    std::cout << "Cat : Default constructer!\n";
}

Cat::~Cat()
{
	delete this->brain;
    std::cout << "Cat : destructer\n";
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow Meow!\n";
}
