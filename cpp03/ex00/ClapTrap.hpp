/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/16 21:50:34 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::cout;

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
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getname(void) const;
        
};