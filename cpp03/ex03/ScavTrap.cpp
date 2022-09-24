/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 11:15:17 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 30) 
{
    std::cout << "ScavTrap: constructer called!\n";
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap demande high five.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructer called!\n";
}