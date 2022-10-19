/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 11:42:48 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
        ClapTrap &operator= (const ClapTrap &var);
        ~ClapTrap();
};