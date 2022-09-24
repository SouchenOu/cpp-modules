/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 16:38:54 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    
    public:
        //constructers
        Dog();  
        Dog(std::string Type);
        //Destructer
        ~Dog();
        // copy constructer
        Dog(Dog &var);
        //operateur d'affectation
        Dog *operator=(Dog &var);
        void makeSound(void) const;
};