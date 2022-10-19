/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 11:42:30 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){

     std::cout << "ClapTrap Default constructor called!\n";
}

ClapTrap::ClapTrap(std::string name)
{
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    this->name = name;
    std::cout << "ClapTrap : constructor called!\n";
}

ClapTrap &ClapTrap::operator= (const ClapTrap &x)
{
   this->Hit_points = x.Hit_points;
   this->Energy_points = x.Energy_points;
   this->Attack_damage = x.Attack_damage;
    this->name = x.name;
    std::cout << "Copy assignment operator called\n";
    return (*this);
}
ClapTrap::ClapTrap(const ClapTrap &var)
{
    this->Hit_points = var.Hit_points;
    this->Energy_points = var.Energy_points;
    this->Attack_damage = var.Attack_damage;
    this->name = var.name;
    std::cout << "ClapTrap copy constructer\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "clapTrap : Destructor called!\n";
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->Hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " a 0 point de vie!\n";
        return ;
    }
    else if(this->Hit_points != 0)
        this->Hit_points--;
    if (this->Energy_points <= 0)
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
    if(Hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " a 0 point de vie!\n";
        return ;
    }
    if (this->Energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << "  pas d'energie!\n";
        return ;
    }else {
        this->Hit_points += amount;
        this->Energy_points--;
    }
    std::cout << "ClapTrap " << this->name << " gets  " << amount << " amount\n";
}


void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << "  pas d'energie!\n";
        return ;
    }
    if(Hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " a 0 point de vie!\n";
        return ;
    }
    this->Hit_points -= amount;
    std::cout << "ClapTrap " << this->name << " lost dammage " << amount << "\n";
    this->Hit_points--;
}
std::string ClapTrap::getname(void) const
{
    return (this->name);
}