/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/16 21:51:00 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"



ClapTrap::ClapTrap(){
    cout << "ClapTrap Default constructor called!\n";
}
ClapTrap::ClapTrap(std::string name)
{
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    this->name = name;
    cout << "ClapTrap constructor with parametre called!\n";
}
ClapTrap::ClapTrap(std::string name, int Hit_points, int Energy_points , int Attack_damage)
{
    this->name = name;
    this->Hit_points= Hit_points;
    this->Energy_points = Energy_points;
    this->Attack_damage = Attack_damage;
    cout << "ClapTrap constructor with parametre called!\n";
}

ClapTrap *ClapTrap::operator= (const ClapTrap &x)
{
    if (&x == this)
        return (this);
    this->Hit_points = x.Hit_points;
    this->Energy_points = x.Energy_points;
    this->Attack_damage = x.Attack_damage;
    this->name = x.name;
    std::cout << "Claptrap Copy assignment operator called";
    return (this);
}
ClapTrap::ClapTrap(const ClapTrap &var)
{
    this->Hit_points = var.Hit_points;
    this->Energy_points = var.Energy_points;
    this->Attack_damage = var.Attack_damage;
    this->name = var.name;
    cout << "ClapTrap copy constructor called!\n";

}

ClapTrap::~ClapTrap()
{
    cout << "ClapTrap Destructor called!\n";
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->Hit_points <= 0)
    {
        cout << "ClapTrap " << this->name << " a 0 point de vie!\n";
        return ;
    }
    else if(this->Hit_points != 0)
        this->Hit_points--;
    if (this->Energy_points <= 0)
    {
        cout << "ClapTrap " << this->name << "pas d'energie!!!!\n";
        return ;
    }
    else if(this->Energy_points != 0)
        this->Energy_points--;
    cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->Attack_damage << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->Hit_points += amount;
    if (this->Energy_points <= 0)
    {
        cout << "ClapTrap " << this->name << "  pas d'energie!\n";
        return ;
    }else {
        this->Energy_points--;
    }
    cout << "ClapTrap " << this->name << " prendre " << amount << "\n";
}


void ClapTrap::takeDamage(unsigned int amount)
{
    if(Hit_points <= 0)
    {
        cout << "ClapTrap " << this->name << " a 0 point de vie!\n";
        return ;
    }
    this->Hit_points -= amount;
    cout << "ClapTrap " << this->name << " lost dammage " << amount << "\n";
    this->Hit_points--;
}

std::string ClapTrap::getname(void) const
{
    return (this->name);
}