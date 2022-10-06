/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/05 14:20:34 by souchen          ###   ########.fr       */
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
    delete oneOfThem2;
    return (1);
}
//In what case it’s better to allocate the zombies on the stack or heap.
//Stack doesn’t require to de-allocate variables whereas in Heap de-allocation is needed.
//The stack section mostly contains methods, local variable, and reference variables.
//the class or array is too big for the stack
