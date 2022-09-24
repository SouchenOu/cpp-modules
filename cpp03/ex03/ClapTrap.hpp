/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 11:11:14 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string name;
        int     Hit_points;
        int     Energy_points;
        int     Attack_damage;
    public:

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getname(void) const;
        //Constrecters and destructers
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, int Energy, int HitPoint, int AttackPoint);
        ~ClapTrap();
};