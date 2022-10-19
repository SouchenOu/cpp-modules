/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/19 09:39:50 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    private:
        Brain  *brain;
    public:
        //constructers
        Dog();  
        //Destructer
        ~Dog();
        // copy constructer
        Dog(Dog &var);
        //operateur d'affectation
        Dog &operator=(Dog &var);
        void makeSound(void) const;
};