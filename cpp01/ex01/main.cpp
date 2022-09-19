/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/19 14:20:17 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie *test;
    Zombie  z;
    int i;
    i = 0;
    //test.setZombieName("ouchen");
    //test.announce();
    test=z.zombieHorde(15, "soukaina");
    while(i <= 15)
    {
        test->announce();
        i++;
    }
    
    delete [] test;
    return 1;
}