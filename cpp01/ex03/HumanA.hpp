/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/20 18:14:42 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA {       
    private:            
           Weapon &wa;
           std::string name;         
   public:
   //constructeur
   HumanA(std::string name, Weapon &wa);
   //getters
   std::string getName();
   void attack();
   
   

};
