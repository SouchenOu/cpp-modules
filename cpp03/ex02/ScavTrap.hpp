/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/16 21:59:43 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    //Constructer and destructer
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &var);
        ScavTrap *operator= (const ScavTrap &var);

        void guardGate();
};