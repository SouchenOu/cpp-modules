/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 15:35:51 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    public:
        Brain *brain;
    public:
        //constructers
        Cat();  
        Cat(std::string Type);
        //Destructer
        virtual ~Cat();
        // copy constructer
        Cat(Cat &var);
         //operateur d'affectation
        Cat &operator=(Cat &var);
        //makesound function
        void makeSound(void) const;
};