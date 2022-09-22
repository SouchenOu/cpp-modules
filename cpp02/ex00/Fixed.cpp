/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/22 20:14:47 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
using std::cout;

Fixed::Fixed() : a(0)
{
    std::cout << "Default constructor called\n";
}


Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &var)
{
    this->a = var.a;
    cout << "Copy constructor called\n";
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
