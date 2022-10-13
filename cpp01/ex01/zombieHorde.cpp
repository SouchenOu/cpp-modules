/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 17:00:40 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name ){
    int j;
    j = 0;
    //int *a = new int[15]; //--> this is array of integers
    //The Array of Objects stores objects
    //This is an array of objects having a maximum limit of N Zombies
     try{
        if(N < 0)
            throw N;
     }catch(int num)
     {
         std::cout << "Access denied - You must be positive.\n";
         std::cout<< "Error number :" << num;
         exit (0);
     }
    Zombie *newHorde = new Zombie[N];
    //Zombie newone[N]; This is N zombie
    while(j <= N)
    {
        newHorde[j].Zombie::setZombieName(name);
        j++;
    }
    return (newHorde);
}
