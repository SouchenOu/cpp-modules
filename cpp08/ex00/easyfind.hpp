/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:29:31 by souchen           #+#    #+#             */
/*   Updated: 2022/10/31 08:29:33 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <algorithm>

class ElementNotFoundException : public std::exception
{
public:
        const char* what() const throw()
        {
                return ("Element not found in container");
        }
};

template <class T>
typename T::iterator easyfind(T& container, int toFind)
{
        typename T::iterator it = std::find(container.begin(), container.end(), toFind);
        if (it != container.end())
                return it;
        else
                throw ElementNotFoundException();
}

