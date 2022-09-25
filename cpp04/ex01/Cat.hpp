/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/25 09:40:25 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain *brain;
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