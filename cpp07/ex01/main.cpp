/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/10 18:56:45 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <array>


template <typename T> void iter(T *array, int length, void (f)(T ele))
{
    int i;
    for (i = 0; i < length; i++)
    {
        f(array[i]);
    }
}
template <typename T> void inc(T num)
{
    num = num + 1;
    std::cout << num << "\n";
}

int main()
{
    
    int array[10]={10,20,30,50};
    //int a = end(array) - begin(array);
    iter(array, 4 , inc);

    char array2[10]={'a', 'b', 'c'};
     iter(array2, 3 , inc);
    return 1;
}

