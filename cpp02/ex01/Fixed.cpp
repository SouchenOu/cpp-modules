/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 17:44:12 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>


Fixed::Fixed()
{
    this->a = 0;
    std::cout << "Default constructor called";
    std::cout << "\n";
}

Fixed::Fixed(const float number)
{
    //The round() family of functions round a to the nearest integer
    std::cout << "Float constructor called\n";
    a =  (roundf(number * powf(2, b)));
    std::cout << a << "\n";
    //a = (number * powf(2, b));
}

Fixed::Fixed(const int number)
{
    //The round() family of functions round a to the nearest integer
    std::cout << "int constructor called\n";
    a =  (roundf(number * powf(2, b)));
    std::cout << a << "\n";
    //a = (number * powf(2, b));
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
    std::cout << "setRawBits member function called\n";
    this->a = raw;
}

Fixed *Fixed::operator= (const Fixed &var) // loperateur daffectation 
{
    std::cout << "Copy assignment operator called\n";
    this->a = var.a;
    return (this); // on retourne l'objet appelant. 
}

float Fixed::toFloat( void ) const
{
    //we can do  cout << "First method" << (int)a / 256 << " " << (float)a / 256 << '\n';
    //and we can do cout << "Second method " << (int)a << " " << (float)a << '\n';
    return (float)((a) / powf(2, b));
}

int Fixed::toInt( void ) const
{
    return (int)(a / powf(2, b));
}

std::ostream &operator<<(std::ostream &out, Fixed const &var)
{
    return out << (float)var.toFloat();
}