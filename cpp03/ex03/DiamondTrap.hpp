/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 21:08:51 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//Now only one copy of data/function member will be copied to class DiamondTrap.
class DiamondTrap : public FrapTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        void whoAmI();
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        void attack(std::string scar);
};

