/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/10 17:16:27 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//template <typename T>
#include <iostream>

template <typename T> void swap ( T a, T b)
{
    int x;
    x = a;
    a = b;
    b = x;
}

template <typename T> T min(T a , T b)
{
    if(a < b)
        return a;
    return b;
}
template <typename T> T max(T a, T b)
{
    if(a > b)
        return a;
    return b;
}


int main( void ) 
{
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
    //std::string c = "chaine1";
    //std::string d = "chaine2";
    float c = 1.2;
    float d = 2.2;
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << "\n";
    std::cout << "min( c, d ) = " << min( c, d ) << "\n";
    std::cout << "max( c, d ) = " << max( c, d ) << "\n";
    return 0;
}