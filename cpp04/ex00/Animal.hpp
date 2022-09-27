/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/27 10:11:52 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(std::string Type);
        Animal(Animal &var);
        Animal();
        ~Animal();
        Animal *operator=(Animal &x);
        std::string getType(void) const;
        void setType(std::string Type);
        virtual void makeSound(void) const;
};