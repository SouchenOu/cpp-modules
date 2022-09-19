/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/19 14:19:52 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name ){
    int j;
    j = 0;
    Zombie *newHorde;
    newHorde = new Zombie[N];

    while(j < N)
    {
        newHorde[j].Zombie::setZombieName(name);
        j++;
    }
    return (newHorde);
}
