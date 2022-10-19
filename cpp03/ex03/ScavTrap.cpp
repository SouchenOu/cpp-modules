/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 11:51:35 by souchen          ###   ########.fr       */
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
    this->Energy_points = 100;
    this->Attack_damage = 30;
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