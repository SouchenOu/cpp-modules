/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/16 21:37:11 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::cout;

class ClapTrap
{
    protected:
        std::string name;
        int     Hit_points;
        int     Energy_points;
        int     Attack_damage;
    public:

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getname(void) const;
        //Constructers and destructer
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &var);
        ClapTrap *operator= (const ClapTrap &var);
        ClapTrap(std::string name, int Hit_points, int Energy_points , int Attack_damage);
        ~ClapTrap();

        //getters
        std::string getName(void)
        {
            return this->name;
        }
        int getHit_points(void)
        {
            return this->Hit_points;
        }
        int getEnergy_points(void)
        {
            return this->Energy_points;
        }
        int getAttack_damage(void)
        {
            return this->Attack_damage;
        }
};