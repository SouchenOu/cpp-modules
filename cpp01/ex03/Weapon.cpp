/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 10:26:52 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

//constructers
Weapon::Weapon(){}
Weapon::Weapon(std::string type)
{
    this->type=type;  
}
//setters
void Weapon::setType(std::string type)
{
    this->type = type;
}
//getters

/*std::string Weapon::getType()
{
    return this->type;  
}*/

const std::string &Weapon::getType(void)
{
    return (this->type);
}
