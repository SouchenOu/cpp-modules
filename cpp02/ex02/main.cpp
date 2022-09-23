/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/23 16:26:56 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
/*int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}*/
class position
{
    public:
        int x;
        static const int y = 8;
    //public:
    position(){ x = 1;}
    position(position &var);
    /*position operator + (position pos1)
    {
        position pos2;
        pos2.x= pos1.x + pos2.x;
        return pos2;
    }*/
        
};
//position::position(int x, int y){this->x=x;
//this->y=y;}
position::position(position &var)
{
   this->x = var.x;
    //this->y= var.y;
}
position operator+ (position &pos1, position &pos2)
{
    pos2.x = pos1.x + pos2.x;
    return pos2;
}

int main()
{
    position var1;
    //position var2(var1);
    //position var3 = var2+var1;
    std::cout << var1.x << "\n";
    return 0;
}