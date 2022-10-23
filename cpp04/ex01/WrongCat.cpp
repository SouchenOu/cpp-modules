/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 17:09:21 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat : constructer\n";
    
}

WrongCat::WrongCat(WrongCat &var)
{
    this->type = var.type;
    std::cout<< "WrongCat : Copy constructer\n";
   
}
WrongCat &WrongCat::operator=(WrongCat &var)
{
    std::cout << "WrongCat: assignment operater\n";
    if (&var == this)
        return (*this);
    this->type = var.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : destructer\n";
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Meow Meow Meow!\n";
}