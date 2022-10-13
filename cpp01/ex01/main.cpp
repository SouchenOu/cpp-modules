/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 16:58:49 by souchen          ###   ########.fr       */
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
    //z.setZombieName("samba");
    //z.announce();
    test=z.zombieHorde((int)11111111, "zamba");
    while(i < 11111111)
    {
        test[i].announce();
        i++;
    }
    delete [] test;
    return 1;
}