/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 17:08:45 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include "Animal.hpp"
class Cat : public Animal
{
    
    public:
        //constructers
        Cat();  
        Cat(std::string Type);
        //Destructer
        ~Cat();
        // copy constructer
        Cat(Cat &var);
         //operateur d'affectation
        Cat *operator=(Cat &var);
        //makesound function
        void makeSound(void) const;
};