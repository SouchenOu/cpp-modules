/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 11:50:23 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"


FragTrap::FragTrap(){
    
    std::cout << "FlagTrap Default constructor called!\n";
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->Hit_points = 50;
    this->Energy_points= 100;
    this->Attack_damage=20;
    std::cout << "FrapTrap: constructer called!\n";
}

FragTrap::FragTrap(const FragTrap &var)
{
  this->Hit_points = var.Hit_points;
  this->Energy_points = var.Energy_points;
  this->Attack_damage = var.Attack_damage;
  this->name = var.name;
  std::cout<< "FragTrap copy constructer called\n";
}

FragTrap &FragTrap::operator= (const FragTrap &x)
{
   this->Hit_points = x.Hit_points;
   this->Energy_points = x.Energy_points;
   this->Attack_damage = x.Attack_damage;
    this->name = x.name;
    std::cout<< "FragTrap Copy assignment operator called" << "\n";
    return (*this);
}



void    FragTrap::highFivesGuys()
{
    std::cout << "FrapTrap " << this->getname() << " en mode Gate keeper.\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FrapTrap: Destructer called!\n";
}