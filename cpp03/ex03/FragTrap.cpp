/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 20:59:53 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "FragTrap.hpp"

FrapTrap::FrapTrap(std::string name) : ClapTrap(name, 50, 100, 20) 
{
    std::cout << "FrapTrap: constructer called!\n";
}

void    FrapTrap::highFivesGuys()
{
    std::cout << "FrapTrap " << this->getname() << " en mode Gate keeper.\n";
}

FrapTrap::~FrapTrap()
{
    std::cout << "FrapTrap: Destructer called!\n";
}