/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/31 20:16:58 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
            array = NULL;
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
            for(int j=0; j<other.n; j++)  //copy contents to this object
                    *(array+j) = *(other.array+j);
            return (*this);
        }
        T &operator[](int i)
        {
            try{
                if(i >= static_cast<int>(this->n) || i < 0)
                throw std::invalid_argument( "index is out of bounds\n" );
            }catch(std::exception &e){
                std::cout << e.what();
                
            }
            
            return (array[i]);
        }
        
    //The subscript operator [] is normally used to access array elements. This operator can be overloaded to enhance the existing functionality of C++ arrays.

    // we can use class templates to create a single class to work with different data types.
};
