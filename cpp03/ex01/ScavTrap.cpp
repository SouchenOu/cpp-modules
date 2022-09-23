/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/23 20:37:09 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 50, 100, 20) 
{
    std::cout << "ScavTrap: constructer called!\n";
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getname() << " en mode Gate keeper.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructer called!\n";
}