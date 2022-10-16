/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/16 22:53:22 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "clap_name", 100, 50, 30), FragTrap(name + "clap_name"),ScavTrap(name + "clap_name")
{
    this->name = name;
    std::cout << "DiamondTrap constructor called!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &var) : FragTrap(var) , ScavTrap(var)
{
  this->Hit_points = getHit_points();
  this->Energy_points = getEnergy_points();
  this->Attack_damage = getAttack_damage();
  this->name = getName();
  std::cout<< "ScavTrap copy constructer called\n";
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &x)
{
   
   this->Hit_points = x.Hit_points;
   this->Energy_points = x.Energy_points;
   this->Attack_damage = x.Attack_damage;
    this->name = x.name;
    std::cout<< "ScavTrap Copy assignment operator called" << "\n";
    return (*this);
}

void DiamondTrap::attack(std::string Diamond)
{
    std::cout << "Diamond" ;
    this->ScavTrap::attack(Diamond);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I'm " << this->name << " and " << "  this is ClapTrap " << ClapTrap::getname() << "\n";
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap:  destructer called\n";
}
