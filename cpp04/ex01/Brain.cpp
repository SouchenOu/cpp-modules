/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/19 11:19:26 by souchen          ###   ########.fr       */
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

void   Brain::setIdeas(std::string *Ideas, int nb)
{
    try
    {
        int i = 0;
        while (i < nb)
        {
            this->ideas[i] = Ideas[i];
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "Brain: something went wrong!\n";
    } 
}
Brain::Brain(std::string *Ideas, int nb)
{
    std::cout << "Brain: this is a constractor!\n";
    try
    {
       int i = 0;
        while (i < nb)
        {
            this->ideas[i] = Ideas[i];
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "Brain: something went wrong!\n";
    }
}
Brain::Brain(Brain &Ideas)
{
    std::cout << "Brain: this is a constractor!\n";
    try
    {
       int i = 0;
        while (i < 100)
        {
            this->ideas[i] = Ideas.ideas[i];
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "Brain: something went wrong!\n";
    }
}

Brain &Brain::operator=(Brain &var)
{
    //int i = 0;
    if (&var == this)
        return (*this);
        
        /*while(i < this->ideas->size())
        {
            this->ideas[i] = var.ideas[i];
        }*/
        (void) var;
   
   
    return (*this);
}