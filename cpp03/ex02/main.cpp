/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 20:10:38 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap Scav1("friend1");    
    ScavTrap Scav2("friend2");
    FrapTrap Frag1("frag");
    Scav1.attack(Scav2.getname());
    Scav2.takeDamage(1);
    Scav1.guardGate();
    Scav1.attack(Scav2.getname());
    Scav2.takeDamage(1);
    Scav1.beRepaired(10);
    Scav2.attack(Scav1.getname());

    /****FragTrap*/
    std::cout << "FragTrap****\n";
    Frag1.takeDamage(100);
    Frag1.attack(Frag1.getname());
    Frag1.takeDamage(100);
    //Frag1.attack(Frag1.getname());
}