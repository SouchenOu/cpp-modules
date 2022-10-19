/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 10:21:08 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

        //Constructers and destructer
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &var);
        ClapTrap &operator= (const ClapTrap &var);
        //getter
        std::string getname(void) const;
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
};