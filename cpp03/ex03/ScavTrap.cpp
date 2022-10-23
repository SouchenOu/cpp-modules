/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 10:31:05 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"


ScavTrap::ScavTrap(){

    std::cout << "ScavTrap Default constructor called!\n";    
}
ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap: constructer called!\n";
}


ScavTrap::ScavTrap(const ScavTrap &var)
{
  this->Hit_points = var.Hit_points;
  this->Energy_points = var.Energy_points;
  this->Attack_damage = var.Attack_damage;
  this->name = var.name;
  std::cout<< "ScavTrap copy constructer called\n";
}

ScavTrap &ScavTrap::operator= (const ScavTrap &x)
{
   this->Hit_points = x.Hit_points;
   this->Energy_points = x.Energy_points;
   this->Attack_damage = x.Attack_damage;
    this->name = x.name;
    std::cout<< "ScavTrap Copy assignment operator called" << "\n";
    return (*this);
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap demande high five.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructer called!\n";
}

void    ScavTrap::attack(const std::string& target)
{
  
    if (this->Hit_points <= 0)
    {
        std::cout << "ScavTrap " << this->name << " a 0 point de vie!\n";
        return ;
    }
    else if(this->Hit_points != 0)
        this->Hit_points--;
    if (this->Energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->name << "pas d'energie!!!!\n";
        return ;
    }
    else if(this->Energy_points != 0)
        this->Energy_points--;
    std::cout << "ScavTrap " << this->name << " attacks " << target << " , causing " << this->Attack_damage << " points of damage!\n";
}
