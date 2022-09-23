/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/23 16:19:35 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
using std::cout;

Fixed::Fixed()
{
    this->a = 0;
    cout << "Default constructor called\n";
}

/*Fixed::Fixed(float number)
{
    a =  (int)(number * powf(2, b));
}

Fixed::~Fixed()
{
    cout << "Destructor called\n";
}*/

Fixed::Fixed(const Fixed &var)
{
    this->a = var.a;
    cout << "Copy constructor called\n";
}

/*int Fixed::getRawBits( void ) const
{
    cout << "getRawBits member function called\n";
    return (this->a);
}

void Fixed::setRawBits( int const raw )
{
    cout << "setRawBits member function called\n";
    this->a = raw;
}

Fixed *Fixed::operator= (const Fixed &var) // loperateur daffectation 
{
    cout << "Copy assignment operator called\n";
    this->a = var.a;
    return (this); // on retourne l'objet appelant. 
}

float Fixed::toFloat( void ) const
{
    //we can do  cout << "First method" << (int)a / 256 << " " << (float)a / 256 << '\n';
    //and we can do cout << "Second method " << (int)a << " " << (float)a << '\n';
    return (float)(a) / powf(2, b);
}

int Fixed::toInt( void ) const
{
    return a / powf(2, b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &var)
{
    return out << (float)var.toFloat();
}*/