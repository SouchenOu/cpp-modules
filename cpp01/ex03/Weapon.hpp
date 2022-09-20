/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/20 18:12:43 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon{
    private:            
        std::string type;       
        
   public:
   //constructer
   Weapon();
   Weapon(std::string type);
   //setter
        void setType(std::string type);
   //getter
       // std::string getType();
       const std::string &getType(void) const;
};  