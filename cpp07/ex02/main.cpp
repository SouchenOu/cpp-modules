/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/12 13:37:23 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

class A {
    private:
        int    B;
        int    C;

    public:
        A() : B(13), C(37) {}
        ~A() {}
        int    getB(void) const 
        { 
            return this->B; 
        }
        
        int    getC(void) const 
        { 
            return this->C; 
        }
        
        A &    operator=(A const & var) {
            this->B = var.getB();
            this->C = var.getC();

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
        for (i = 0; i < array1.size(); i++) 
        {
            std::cout << "array[" << i << "]=" << array1[i];
        }
    return (1);
}