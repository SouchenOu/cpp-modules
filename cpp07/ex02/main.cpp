/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/29 05:27:31 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

class A {
    private:
        unsigned int    B;
        unsigned int    C;

    public:
        A() 
        {
           this->B = 13;  
           this->C = 37;    
        }
        ~A() {
            
        }
        int    getB(void) const 
        { 
            return this->B; 
        }
        
        int    getC(void) const 
        { 
            return this->C; 
        }
        
        A &    operator=(A const & var) {
            this->B = var.B;
            this->C = var.C;

            return (*this);
        }

        
        
};

std::ostream &    operator<<(std::ostream & out, A const & other) {
    out << other.getB();
    out << other.getC() << "\n";

    return (out);
}

int    main(void) {
    int i = 0;
    //Array<A>    array1[10];
    Array<A>    array1(10);
    Array<A> Array3(7);
    Array<A> A1(20);
    A1=Array3;
    std::cout << "size here : " << array1.size() << "\n";
        for (i = 0; i < array1.size(); i++) 
        {
            std::cout << "array[" << i << "]=" << array1[i] << "\n";
        }
        for (i = 0; i < A1.size(); i++) 
        {
            std::cout << "A1[" << i << "]=" << A1[i] << "\n";
        }
        
            std::cout << "array[0]=" << Array3[0] << "\n";        
    return (1);
}

//template <class a_type> class a_class {...};