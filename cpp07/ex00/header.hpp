/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 13:46:43 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> 
void swap ( T &a, T &b)
{
    T x;
        x = a;
        a = b;
        b = x;
}

template <typename T> 
T min(T a , T b)
{
    if(a < b)
        return a;
    return b;
}

template <typename T> T max(T a, T b)
{
    if(a > b)
        return a;
    return b;
}

