/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 16:58:38 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string Type)  : Animal("Cat")
{
    std::cout << "Cat : constructer\n";
    (void)Type;
}

Cat::Cat(Cat &var) : Animal("Cat")
{
    std::cout<< "Cat : Copy constructer\n";
    (void)var;
}
Cat *Cat::operator=(Cat &var)
{
    (void)var;
    return (this);
}
Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat : Default constructer!\n";
}

Cat::~Cat()
{
    std::cout << "Cat : destructer\n";
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow Meow!\n";
}