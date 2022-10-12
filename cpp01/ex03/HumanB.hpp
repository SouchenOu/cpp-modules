/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/12 11:45:48 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB {       
    private:            
           Weapon *wb;
           std::string name;         
   public:
     //constructeur
    HumanB();
    HumanB(std::string name);
    void  setWeapon(Weapon &x);
    //getters
    std::string getName();
    void attack();

};