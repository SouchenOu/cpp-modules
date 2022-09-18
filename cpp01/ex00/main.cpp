/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/18 20:41:28 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie *newZombie( std::string name)
{
    Zombie *newZ;
    newZ = new Zombie;
    newZ->Zombie::setZombie(name);
    return newZ;
    
}
void randomChump( std::string name )
{
    Zombie newZo;

    newZo.setZombie(name);
    newZo.announce();
}

int main()
{
    Zombie* oneOfThem = newZombie("Foo");
     Zombie* oneOfThem2 = newZombie("zomb2");
    oneOfThem->announce();
    oneOfThem2->announce();
    randomChump("zomb3");
    randomChump("zomb4");
    delete oneOfThem;
    return (1);
}