/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 08:37:05 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap Clap1("friend1");    
    ClapTrap Clap2("friend2");
    Clap1.attack(Clap2.getname());
    Clap2.takeDamage(10);
    Clap1.beRepaired(10);
    Clap1.attack("souchen");
    Clap2.takeDamage(1);
    /*Clap1.beRepaired(10);
    Clap1.attack(Clap2.getname());
    Clap2.takeDamage(1);*/
}