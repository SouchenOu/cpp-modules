/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/12 11:49:15 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

//constructeur

HumanB::HumanB()
{
   
}

HumanB::HumanB(std::string Name)
{
   this->name=Name; 
}

void    HumanB::setWeapon(Weapon &x)
 {
    this->wb= &x;  
 }
//getter
std::string HumanB::getName(){
    return this->name;
}
//Attack()
void HumanB::attack()
{
    if(this->wb)
    {
        std::cout<< this->getName() << " attacks with their " << wb->getType() << "\n";
    }else{
        this->wb = NULL;
        std::cout << "No weapon!\n"; 
    }
}