/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/11/02 09:40:12 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Class templates are especially useful for “containers”, data structures that serve mainly as collections of other
//This is a class template that behaves like an array 

#pragma once
template <typename T> class Array
{
    private:
        unsigned int n;
        T *array;
    public:
        Array()
        {
            std::cout << "Default constructer called\n";
            n = 0;
            array = new T[1];
        }
        Array(unsigned int size)
        {
            std::cout << "Constructer with parameter\n";;
            n = size;
            array = new T[size];
        }

        unsigned int size()
        {
            return (n);
        }
        Array (Array &var)
        {
            std::cout << "Copy constructer called\n";
            unsigned int i;
            this->n = var.n; ////new one is same size
            this->array = new T[n]; ////get space for contents
            for (i = 0; i < n; i++)
                *(array+i) = *(var.array+i);
        }
        Array &operator=(Array &other)
        {
            std::cout << "Assignement operater called\n";
            if (this == &other)
                return (*this);
            delete [] array;
            n = other.n;  
            array = new T[other.n]; 
            for(unsigned int j=0; j<other.n; j++)  //copy contents to this object
                    *(array+j) = *(other.array+j);
            return (*this);
        }
        T &operator[](int i)
        {
           
                if(i >= static_cast<int>(this->n) || i < 0)
                    throw std::invalid_argument( "index is out of bounds\n" );
            return (array[i]);
        }
        ~Array ()
        {
            delete [] array;
            std::cout << "Destructer called\n";
        }
        
    
};
//This is a class template that behaves like an array 
//The subscript operator [] is normally used to access array elements. This operator can be overloaded to enhance the existing functionality of C++ arrays.
// we can use class templates to create a single class to work with different data types.
//The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.
//when a class defines something that is independent of the data type.

/**we can use class templates to create a single class to work with different data types.*/
