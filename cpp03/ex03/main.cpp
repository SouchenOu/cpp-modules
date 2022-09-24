/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/23 20:34:50 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap Scav1("friend1");    
    ScavTrap Scav2("friend2");

    Scav1.attack(Scav2.getname());
    Scav2.takeDamage(1);
    Scav1.guardGate();
    Scav1.attack(Scav2.getname());
    Scav2.takeDamage(1);
    Scav1.beRepaired(10);
    Scav2.attack(Scav1.getname());
}