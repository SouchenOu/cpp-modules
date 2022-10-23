/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 10:17:54 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap Scav1("friend1");
    ClapTrap Clap1("me");
    // std::cout << "Hit : " << Scav1.getHit_points() << "\n";  
    // ClapTrap C1 ("Test");  
     ScavTrap Scav2("friend2");
    /*ScavTrap Scav3("friend3");    
    ScavTrap Scav4("friend4");
    ScavTrap S1(Scav1);
    ClapTrap C2;
    ClapTrap C1(S1);*/
    //ScavTrap S2(C2);nop
    
    

    Scav1.attack(Scav2.getname());
    Clap1.attack(Scav2.getname());
    Scav1.guardGate();
    /*Scav2.takeDamage(1);
    Scav1.guardGate();
    Scav3.attack(Scav4.getname());
    Scav3.takeDamage(1);
    Scav3.beRepaired(10);

    std::cout<< "test copy constructer\n";
    S1.attack(Scav2.getname());
    C1.attack(Scav2.getname());*/
}