/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 17:34:22 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"


int main( void ) {
Fixed a;
//Fixed b;
//a = b;// copy assigment operator
//Fixed const b( 8 );
Fixed const c( 0.5f );
//Fixed const d( b );
//a = Fixed( 1234.4321f );
////Fixed c = a; // copy constructer
//std::cout << "a is " << a << std::endl;
//std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
//std::cout << "d is " << d << std::endl;
//std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}

/*class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
    {  real = r;   imag = i; }
    friend ostream & operator << (ostream &out, const Complex &c);//l=operateur dextraction
    friend istream & operator >> (istream &in,  Complex &c);//operateur dinsertion
};
 
ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}
 
istream & operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}
 
int main()
{
   Complex c1;
   cin >> c1;
   cout << "The complex object is ";
   cout << c1;
   return 0;
}*/