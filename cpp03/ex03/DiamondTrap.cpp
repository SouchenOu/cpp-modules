/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 12:22:03 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 50, 100, 30), FrapTrap(name + "_clap_name"),ScavTrap(name + "_clap_name")
{
    this->name = name;
    std::cout << "DiamondTrap " << name << "  constructor called!\n";
}

void DiamondTrap::attack(std::string monstre)
{
    std::cout << "Diamond" ;
    this->ScavTrap::attack(monstre);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I'm " << this->name << " and " << "  this is ClapTrap " << ClapTrap::getname() << "\n";
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap:  destructer called\n";
}
