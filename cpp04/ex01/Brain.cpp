/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 18:08:01 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Brain.hpp"
#include <iostream>
Brain::Brain()
{
    std::cout << "Brain: constructer called!\n";
}

Brain::~Brain()
{
    std::cout << "Brain:destructer called!\n";
}

std::string const *Brain::getIdeas() const
{
    return (this->ideas);
}

void   Brain::setIdeas(std::string *Ideas)
{
   
        int i = 0;
        while (i < 100)
        {
            this->ideas[i] = Ideas[i];
            i++;
        }
    
    
}

Brain::Brain(std::string *Ideas)
{
    std::cout << "Brain: this is a constructor!\n";
    
       int i = 0;
        while (i < 100)
        {
            this->ideas[i] = Ideas[i];
            i++;
        }
    
}

Brain::Brain(Brain &var)
{
    std::cout << "Brain: this is copy constructor!\n";
   
       int i = 0;
        while (i < 100)
        {
            this->ideas[i] = var.ideas[i];
            i++;
        }
    
}

Brain &Brain::operator=(Brain &var)
{
   std::cout << "Brain: this is assignment operator\n";
    
    if (&var == this)
        return (*this);
        
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = var.ideas[i];
            i++;
    }
   
    return (*this);
}