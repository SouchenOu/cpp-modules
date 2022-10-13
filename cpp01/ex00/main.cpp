/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 16:24:33 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

/**new : Attempts to allocate and initialize an object or array 
  of objects .*/
Zombie *newZombie( std::string name)
{
    //Allocate memory for the object
    Zombie *newZ = new Zombie;
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

//A destructor is called for a class object when that object passes out of scope or is explicitly deleted.
//Destructors are usually used to deallocate memory and do other cleanup for a class object and its class members when the object is destroyed
//In what case it’s better to allocate the zombies on the stack or heap.
//Stack doesn’t require to de-allocate variables whereas in Heap de-allocation is needed.
//The stack section mostly contains methods, local variable, and reference variables.
//the class or array is too big for the stack

/**The most important use is the flexibility provided to programmers. 
  We are free to allocate and deallocate memory whenever we need it 
  and whenever we don’t need it anymore.*/
