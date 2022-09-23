/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/23 11:38:52 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed()
{
    this->a = 0;
    std::cout << "Default constructor called\n";
}


Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &var)
{
    this->a = var.a;
    std::cout << "Copy constructor called\n";
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (this->a);
}

void Fixed::setRawBits( int const raw )
{
    this->a = raw;
}

Fixed *Fixed::operator= (const Fixed &var)
{
     this->a = var.a;
    std::cout << "Copy assignment operator called\n";
    return (this);
}
