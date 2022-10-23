/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 18:06:47 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

//default constructer 
WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal : Default constructer !\n";
}
// constructer avec parametre
WrongAnimal::WrongAnimal(std::string Type)
{
    //std::cout << "Animal: constructer\n";
    this->type = Type;
}
// copy constructer
WrongAnimal:: WrongAnimal(WrongAnimal &var)
{
    std::cout << "WrongAnimal Copy constructer\n";
    this->type = var.type;
}
// operateur d'affectation
WrongAnimal *WrongAnimal::operator=(WrongAnimal &var)
{
    this->type = var.type;
    return(this);
}
//Destructers

 WrongAnimal::~WrongAnimal(){
     std::cout<< "WrongAnimal : Destructer!\n";
 }

 //getters
std::string  WrongAnimal::getType(void) const
 {
     return (this->type);
 }
 //setter
 void WrongAnimal::setType(std::string Type)
 {
     this->type = Type;
 }
 // sound
 void WrongAnimal::makeSound(void) const
 {
     std::cout << "WrongAnimal No sound!!\n";
 }
