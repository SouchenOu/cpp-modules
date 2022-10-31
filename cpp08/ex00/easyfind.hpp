/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:29:31 by souchen           #+#    #+#             */
/*   Updated: 2022/10/31 14:12:38 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <algorithm>


class NotFound : public std::exception
{
public:
        const char* what() const throw()
        {
                return ("Infortunatly dosn't exist in this container\n");
        }
};

template <typename T>
typename T::iterator easyfind(T& container, int VarFind)
{
        typename T::iterator range = std::find(container.begin(), container.end(), VarFind);
        if (range != container.end())
                return range;
        else
                throw NotFound();
}


/**The find() function scans the vector list from the beginning. 
 * If it does not see the value it is looking for, it will reach the end of the vector. 
 * The end of the vector is officially vtr.end(), which is just beyond the last element. */



//we can use class templates to create a single class to work with different data types.
//In the above declaration, T is the template argument which is a placeholder for the data type used, and class is a keyword.
//Once we've declared and defined a class template, we can create its objects in other classes or functions
//A container is a holder object that stores a collection of other objects ,They are implemented as class templates, which allows great flexibility in the types supported as elements. 

//Iterators are used to point at the memory addresses of STL containers, They reduce the complexity and execution time of the program.
//1. begin() :- This function is used to return the beginning position of the container.

//2. end() :- This function is used to return the after end position of the container.

//An iterator is an object (like a pointer) that points to an element inside the container
//We can use iterators to move through the contents of the container.
//We can use iterators to move through the contents of the container. They can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular location using them
//Now each one of these iterators are not supported by all the containers in STL, different containers support different iterators, like vectors support Random-access iterators, while lists support bidirectional iterators. The whole list is as