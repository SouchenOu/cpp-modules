/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 18:11:49 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//default constructer 
Animal::Animal(){
    std::cout << "Animal : Default constructer !\n";
}
// constructer avec parametre
Animal::Animal(std::string Type)
{
    //std::cout << "Animal: constructer\n";
    this->type = Type;
}
// copy constructer
Animal:: Animal(Animal &var)
{
    std::cout << "Animal Copy constructer\n";
    this->type = var.type;
}
// operateur d'affectation
Animal *Animal::operator=(Animal &var)
{
    this->type = var.type;
    return(this);
}
//Destructers

 Animal::~Animal(){
     std::cout<< "Animal : Destructer!\n";
 }

 //getters
std::string  Animal::getType(void) const
 {
     return (this->type);
 }
 //setter
 void Animal::setType(std::string Type)
 {
     this->type = Type;
 }
 // sound
 void Animal::makeSound(void) const
 {
     std::cout << "Animal No sound!!\n";
 }


 
