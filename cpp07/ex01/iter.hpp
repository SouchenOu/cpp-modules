/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/29 04:46:07 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#pragma once

template <typename T> void iter(T *array, int length, void  (f)(T const &ele))
{
    int i;
    for (i = 0; i < length; i++)
    {
        f(array[i]);
    }
}
/*template <typename T> 
void inc(T const &num)
{
    //num = num + 1; je peux pas changer un const
    std::cout << num << "\n";
}*/