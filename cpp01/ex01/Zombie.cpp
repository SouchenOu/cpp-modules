/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 09:04:01 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"


//destructer
Zombie::~Zombie()
{}
//constructer
Zombie::Zombie(){}

//setter
void Zombie::setZombieName(std::string Nom)
{
    (this->nom) = Nom;
}
void Zombie::setZombieN(int N)
{
    (this->N) = N;
}
//getter
std::string Zombie::getZombieName()
{
    return this->nom;
}

int Zombie::getZombieN()
{
    return this->N;
}
void Zombie::announce( void )
{
   std::cout << this->getZombieName() << ": " << "BraiiiiiiinnnzzzZ...\n";
}