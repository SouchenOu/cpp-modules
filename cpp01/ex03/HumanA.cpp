/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/05 18:26:47 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"


//constructeur

HumanA::HumanA(std::string name, Weapon &x) : wa(x)
{
    this->name = name;
}
//getter
std::string HumanA::getName(){
    return this->name;
}
//Attack()
void HumanA::attack()
{
    std::cout<< this->getName() << " attacks with their " << wa.getType() << "\n";
}