/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 12:24:28 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"


//flags : it marks something so that the compiler pays attention to some specific request
int main()
{
    //ScavTrap Scav1("friend1");  
    ClapTrap Clap1("test1");  
    ScavTrap Scav2("friend2");
    FragTrap frap1("souchen");
    DiamondTrap D1("diamonda");
    D1.beRepaired(10);
    //Clap1.attack(frap1.getname());
    D1.attack(frap1.getname());
    //std::cout << D1.getname() << "\n";
    //std::cout << frap1.getname() << "\n";
    /*Scav1.attack(Scav2.getname());
    Scav2.takeDamage(1);
    Scav1.guardGate();
    Scav1.attack(Scav2.getname());
    Scav2.takeDamage(1);
    Scav1.beRepaired(10);
    Scav2.attack(Scav1.getname());*/
    
}

//flags: 
//-Werror: Reject missing function prototypes
//Wall: Recommended compiler warnings