/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/16 22:25:11 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) 
{
    std::cout << "ScavTrap: constructer called!\n";
}
 ScavTrap::ScavTrap(const ScavTrap &var) : ClapTrap(var)
{
  this->Hit_points = getHit_points();
  this->Energy_points = getEnergy_points();
  this->Attack_damage = getAttack_damage();
  this->name = getName();
  std::cout<< "ScavTrap copy constructer called\n";
}

ScavTrap *ScavTrap::operator= (const ScavTrap &x)
{
    if (&x == this)
        return (this);
   this->Hit_points = x.Hit_points;
   this->Energy_points = x.Energy_points;
   this->Attack_damage = x.Attack_damage;
    this->name = x.name;
    std::cout<< "ScavTrap Copy assignment operator called" << "\n";
    return (this);
}



void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructer called!\n";
}