/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/16 22:41:01 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 50, 100, 20) 
{
    std::cout << "FrapTrap: constructer called!\n";
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FrapTrap " << this->getname() << " en mode Gate keeper.\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FrapTrap: Destructer called!\n";
}