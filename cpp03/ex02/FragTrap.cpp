/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/16 22:25:37 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100 , 100, 30) 
{
    std::cout << "FrapTrap: constructer called!\n";
}

FragTrap::FragTrap(const FragTrap &var) : ClapTrap(var)
{
  this->Hit_points = getHit_points();
  this->Energy_points = getEnergy_points();
  this->Attack_damage = getAttack_damage();
  this->name = getName();
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
    std::cout << "FragTrap high fives .\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Destructer called!\n";
}