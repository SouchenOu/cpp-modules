/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/16 22:53:39 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//Now only one copy of data/function member will be copied to class DiamondTrap.
class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        void whoAmI();
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &var);
        DiamondTrap &operator= (const DiamondTrap &var);
        ~DiamondTrap();
        void attack(std::string scar);
};

