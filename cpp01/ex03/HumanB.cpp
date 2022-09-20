/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/20 18:15:26 by souchen          ###   ########.fr       */
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
    this->wb= x;  
 }
//getter
std::string HumanB::getName(){
    return this->name;
}
//Attack()
void HumanB::attack()
{
    std::cout<< this->getName() << " attacks with their " << this->wb.getType() << "\n";
}