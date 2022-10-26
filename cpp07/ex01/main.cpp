/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 15:25:26 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <array>



/*int main()
{
    
    int array[10]={10,20,30,50};
    //int a = end(array) - begin(array);
    iter(array, 4 , inc);

    char array2[10]={'a', 'b', 'c'};
     iter(array2, 3 , inc);
    return 1;
}*/



class Awesome{

    private:
        int _n;

    public:
        Awesome(void) : _n(24){ return;}
        int get(void) const { return this->_n;}
};

std::ostream & operator<<(std::ostream & o ,Awesome const & rhs) { o << rhs.get(); return o;}

template<typename T>
void print(T const & x)
{
    std::cout << x << std::endl; return; 
}
int main()
{
    int tab[] = { 0,1,2,3,4};
    Awesome tab2[5];
    
    iter(tab,5,print);
    iter(tab2, 5, print);

    return 0;
}

