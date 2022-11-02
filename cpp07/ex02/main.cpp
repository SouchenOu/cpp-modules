/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/11/02 10:07:59 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

/*class A {
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
    unsigned int i = 0;
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
}*/

#define MAX_VAL 8
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    
    //numbers[3] = 10;
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "num = " << numbers[i] << "\n";
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        for (int i = 0; i < MAX_VAL; i++)
        {
            std::cout << "tmp = " << tmp[i] << "\n";
        }
    }//after this scope memory destroyed by using destructer 

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[3] = 10;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
