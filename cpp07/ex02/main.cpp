/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 17:01:12 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

class A {
    private:
        int    B;
        int    C;

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
    unsigned int i;
    Array<A>    array1(10);
    
    std::cout << "size here : " << array1.size() << "\n";
    std::cout << "Here :"<<array1[120];
        for (i = 0; i < array1.size(); i++) 
        {
            std::cout << "array[" << i << "]=" << array1[i] << "\n";
        }
    return (1);
}

