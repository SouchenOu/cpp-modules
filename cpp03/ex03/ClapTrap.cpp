/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 11:30:32 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}
ClapTrap::ClapTrap(std::string name, int Energy, int HitPoint, int AttackDamage)
{
    this->name = name;
    this->Energy_points = Energy;
    this->Hit_points = HitPoint;
    this->Attack_damage = AttackDamage;
}
ClapTrap::ClapTrap(std::string name)
{
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    this->name = name;
    std::cout << "ClapTrap : Default constructor called!\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "clapTrap : Destructor called!\n";
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->Hit_points == 0)
    {
        std::cout << "ClapTrap " << this->name << " a 0 point de vie!\n";
        return ;
    }
    else if(this->Hit_points != 0)
        this->Hit_points--;
    if (this->Energy_points == 0)
    {
        std::cout << "ClapTrap " << this->name << "pas d'energie!!!!\n";
        return ;
    }
    else if(this->Energy_points != 0)
        this->Energy_points--;
    std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->Attack_damage << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_points == 0)
    {
        std::cout << "ClapTrap " << this->name << "  pas d'energie!\n";
        return ;
    }
    std::cout << "ClapTrap " << this->name << " a été réparer par " << amount << "\n";
}


void ClapTrap::takeDamage(unsigned int amount)
{
    this->Hit_points += amount;
    std::cout << "ClapTrap " << this->name << " prendre dammage " << amount << "\n";
    this->Energy_points--;
}

std::string ClapTrap::getname(void) const
{
    return (this->name);
}