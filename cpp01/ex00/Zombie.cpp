/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/05 14:22:53 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"


//destructer
Zombie::~Zombie()
{
    std::cout << this->getZombie() << " destructor." << "\n";
}
//constructer
Zombie::Zombie(){}
//setter

void Zombie::setZombie(std::string Nom)
{
    (this->nom) = Nom;
}
//getter
std::string Zombie::getZombie() const
{
    return this->nom;
}

void Zombie::announce( void )
{
   std::cout << this->getZombie() << ": " << "BraiiiiiiinnnzzzZ...\n";
}