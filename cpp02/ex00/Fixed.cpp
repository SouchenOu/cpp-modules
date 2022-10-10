/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/10 20:03:11 by souchen          ###   ########.fr       */
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
/**the main difference between both is copy constructor creates a new object and assigns the value but assignment operator does not create a new object, instead it assigns the value to the data member of the same object.*/
Fixed *Fixed::operator= (const Fixed &var)
{
     this->a = var.a;
    std::cout << "Copy assignment operator called\n";
    return (this);
}

/**Copy Constructor initializes a new object by an already existing object of the same class.*/
//The old object which was created and the new object which is invoked, will share different memory locations.
/**Assignment operator is simply an operator which assigns some value to data members, objects.*/
//The first object and second object which is assigned the value of first object, shares same memory locations.



//The difference between a copy constructor and an assignment operator is that a copy constructor helps to create a copy of an already existing object without altering the original value of the created object, whereas an assignment operator helps to assign a new value to a data member or an object in the program.