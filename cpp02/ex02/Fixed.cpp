/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/23 17:47:33 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed operator+ (const Fixed &a, const Fixed &b);
Fixed operator- (const Fixed &a, const Fixed &b);
Fixed operator/ (const Fixed &a, const Fixed &b);
Fixed operator* (const Fixed &a, const Fixed &b);
bool operator> (const Fixed& first, const Fixed& second);
bool operator>=(const Fixed& first, const Fixed& second);
bool operator<=(const Fixed& first, const Fixed& second);
bool operator< (const Fixed& first, const Fixed& second);
bool operator==(const Fixed& first, const Fixed& second);
bool operator!=(const Fixed& first, const Fixed& second);
std::ostream &operator<<(std::ostream &out, const Fixed &var);

Fixed::Fixed() 
{
    this->a = 0;
}

Fixed::Fixed(float number)
{
    a =  (int)(number * powf(2, b));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &var)
{
    this->a = var.a;
}

int Fixed::getRawBits( void ) const
{
    return (this->a);
}

void Fixed::setRawBits( int const raw )
{
    this->a = raw;
}

Fixed *Fixed::operator= (const Fixed &x)
{
    if (&x == this)
        return (this);
    this->a = x.a;
    return (this);
}

float Fixed::toFloat( void ) const
{
    return (float)(a) / powf(2, b);
}

int Fixed::toInt( void ) const
{
    return a / powf(2, b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &var)//insertion
{
    return out << var.toFloat();
}



// Operator Overloading == and + && * _ + ....

bool operator< (const Fixed& first, const Fixed& second)
{
    return (first.toFloat() < second.toFloat());
}

bool operator> (const Fixed& first, const Fixed& second)
{
    return (first.toFloat() > second.toFloat());
}
bool operator<=(const Fixed& first, const Fixed& second)
{
    return (first.toFloat() <= second.toFloat());
}
bool operator>=(const Fixed& first, const Fixed& second)
{
    return (first.toFloat() >= second.toFloat());
}
bool operator==(const Fixed& first, const Fixed& second)
{
    return (first.toFloat() == second.toFloat());
}
bool operator!=(const Fixed& first, const Fixed& second)
{
    return !(first.toFloat() == second.toFloat());
}

Fixed operator+ (const Fixed &a, const Fixed &b)
{
    Fixed sum;

    sum = a.toFloat() + b.toFloat();
    return (sum);
}

Fixed operator/ (const Fixed &a, const Fixed &b)
{
    Fixed div;

    div = a.toFloat() / b.toFloat();
    return (div);
}

Fixed operator- (const Fixed &a, const Fixed &b)
{
    Fixed sous;

    sous = a.toFloat() - b.toFloat();
    return (sous);
}

Fixed operator* (const Fixed &a, const Fixed &b)
{
    Fixed multip;

    multip = a.toFloat() * b.toFloat();
    return (multip);
}

Fixed Fixed::operator++(void)//Prefix increment operator.
{
    Fixed inc;
    inc = ++a;
    return (inc);
}
Fixed Fixed::operator++(int)//Postfix increment operator.
{
    Fixed incpost;
    incpost=a++;
    return (incpost);
}
Fixed Fixed::operator--(void)// // Prefix decrement operator.
{
    Fixed dec(++a);
    return (dec);
}
Fixed Fixed::operator--(int)// Postfix decrement operator.
{
    Fixed decpost;
    decpost=a--;
    return (decpost);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (a);
    return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return (a);
    return (b);
}
