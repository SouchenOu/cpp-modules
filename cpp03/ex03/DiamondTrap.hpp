/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/18 12:51:55 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//Now only one copy of data/function member will be copied to class DiamondTrap.
//and class ClapTrap  becomes the virtual base class.
//A single copy of its data members is shared by all the base classes that use virtual base.
//Now class FragTrap and class ScavTrap becomes virtual base class and no duplication of data is done.
class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        //void len();
        void whoAmI();
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &var);
        DiamondTrap &operator= (const DiamondTrap &var);
        ~DiamondTrap();
        void attack(std::string monster);
};

