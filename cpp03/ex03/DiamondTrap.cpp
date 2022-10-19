/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 12:55:12 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"



DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called!\n";
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 30;
    std::cout << "DiamondTrap constructor called!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &var)
{
  this->Hit_points = var.Hit_points;
  this->Energy_points = var.Energy_points;
  this->Attack_damage = var.Attack_damage;
  this->name = var.name;
  std::cout<< "DiamondTrap copy constructer called\n";
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &x)
{
   
   this->Hit_points = x.Hit_points;
   this->Energy_points = x.Energy_points;
   this->Attack_damage = x.Attack_damage;
    this->name = x.name;
    std::cout<< "DiamondTrap Copy assignment operator called" << "\n";
    return (*this);
}

void DiamondTrap::attack(std::string Diamond)
{
    std::cout << "Diamond" ;
    ScavTrap::attack(Diamond);
}

void DiamondTrap::whoAmI()
{
    //ClapTrap c;
    std::cout << "I'm " << this->name << " and " << "  this is ClapTrap " << ClapTrap::getname() << "\n";
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap:  destructer called\n";
}
