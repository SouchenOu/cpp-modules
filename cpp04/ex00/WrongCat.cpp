/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 18:00:13 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(std::string Type)  : WrongAnimal("Cat")
{
    std::cout << "WrongCat : constructer\n";
    (void)Type;
}

WrongCat::WrongCat(WrongCat &var) : WrongAnimal("Cat")
{
    std::cout<< "WrongCat : Copy constructer\n";
    (void)var;
}
WrongCat &WrongCat::operator=(WrongCat &var)
{
    if (&var == this)
        return (*this);
    this->type = var.type;
    return (*this);
}
WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "WrongCat : Default constructer!\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : destructer\n";
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Meow Meow Meow!\n";
}