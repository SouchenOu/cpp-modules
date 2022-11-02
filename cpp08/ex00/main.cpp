/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:29:40 by souchen           #+#    #+#             */
/*   Updated: 2022/11/02 10:59:43 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printx(int i)
{
        std::cout << i << std::endl;
}

int main()
{
        std::vector<int> vector2 = { 1, 2, 3, 4, 5, 6 , 7 };;

        try
        {
                std::vector<int>::iterator vector1 = easyfind(vector2,8);// this vector1 point sur 2
                std::vector<int>::iterator i;
                std::cout << "our Vector:" << "\n";
                for (i = vector2.begin(); i != vector2.end(); ++i)
                {   
                        cout << *i << " ";
                }
                std::cout << "\nOur result\n";
                for_each(vector1, vector2.end(), printx); //from the number that vector1 point for to the end of vector2
        }
        catch (const std::exception& e)
        {
                std::cerr << e.what() << std::endl;
        }
        
        std::list<int> list;
        for (int i = 0; i <= 100; i++)
                list.push_back(i);

        try
        {
                std::list<int>::iterator OurList = easyfind(list, 80);
                std::cout << "\nOur result" << "\n";
                for_each(OurList, list.end(), printx);
        }
        catch (const std::exception& e)
        {
                std::cerr << e.what() << std::endl;
        }
}

/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declaring a vector
    vector<int> v = { 1, 2, 3 };
 
    // Declaring an iterator
    vector<int>::iterator i;
 
    int j;
 
    cout << "Without iterators = ";
     
    // Accessing the elements without using iterators
    for (j = 0; j < 3; ++j)
    {
        cout << v[j] << " ";
    }
 
    cout << "\nWith iterators = ";
     
    // Accessing the elements using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }
 
    // Adding one more element to vector
    v.push_back(4);
 
    cout << "\nWithout iterators = ";
     
    // Accessing the elements without using iterators
    for (j = 0; j < 4; ++j)
    {
        cout << v[j] << " ";
    }
 
    cout << "\nWith iterators = ";
     
    // Accessing the elements using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }
 
    return 0;
}*/

//Foreach loop is used to iterate over the elements of a containers (array, vectors etc) quickly without performing initialization, testing and increment/decrement. The working of foreach loops is to do something for every element rather than doing something n times.
//continers:
/* there is vector, stack , queues, list, trees , array */
//What is iterater ; is a way to idetifier an element in a container
//with vectors we specifier the type not the size