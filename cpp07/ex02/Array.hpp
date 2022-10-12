/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/12 13:33:50 by souchen          ###   ########.fr       */
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
            n = 0;
            array = NULL;
        }
        Array(unsigned int size)
        {
            n = size;
            array = new T[size];
        }

        unsigned int size()
        {
            return (n);
        }
        Array (Array &var)
        {
            int i;
            this->n = var.n; ////new one is same size
            this->array = new T[n]; ////get space for contents
            for (i = 0; i < n; i++)
                this->array[i] = var.array[i];
                //*(array+i) = *(var.array+j);
        }
        Array &operator=(Array &other)
        {
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
            if(i >= static_cast<int>(this->n) || i < 0)
                throw std::invalid_argument( "index is out of bounds" );
            return (array[i]);
        }
        
    


};
