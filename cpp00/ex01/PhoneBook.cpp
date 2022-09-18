/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/18 17:39:34 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(){index=0;}
    //setters
void PhoneBook::setPhoneBook(std::string firstname, std::string lastname,std::string nickname, std::string phonenumber, std::string darkestsecret)
{
    MyContact[index].setFirstName(firstname);
    MyContact[index].setLastName(lastname);
    MyContact[index].setNickName(nickname);
    MyContact[index].setPhonenumber(phonenumber);
    MyContact[index].setDarkestsecret(darkestsecret);
    index++;
    std::cout << "\n";
     
}
void PhoneBook::ADD_func(PhoneBook &contact_elem)
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string PhoneNumber;
    std::string darkestSecret;
    Contact c;
    int i;
    i = 0;
        std::cout << "Enter your first name:\n";
        getline(std::cin,firstName);
        contact_elem.tab[contact_elem.index][0]= (firstName);
        std::cout << "Enter your lastName:\n";
        getline(std::cin,lastName);
        contact_elem.tab[contact_elem.index][1]= (lastName);
        std::cout << "Enter your NickName:\n";
        getline(std::cin,nickName);
        contact_elem.tab[contact_elem.index][2]= (nickName);
        std::cout << "Enter your PhoneNumber:\n";
        getline(std::cin,PhoneNumber);
        contact_elem.tab[contact_elem.index][3]= (PhoneNumber);
        std::cout << "Enter your darkestSecret:\n";
        getline(std::cin,darkestSecret);
        contact_elem.tab[contact_elem.index][4]= (darkestSecret);
        contact_elem.setPhoneBook(firstName,lastName,nickName,PhoneNumber,darkestSecret);    
        
}
void PhoneBook::SEARCH_func(PhoneBook Contact)
{
    int i;
    int j;
    i = 0;
    j = 0;
    //std::cout<< Contact.tab[0][0];
    std::cout<< "|"; std::cout<< "index"; 
    std::cout<< "|";std::cout<< "First name";
    std::cout<< "|";std::cout<< "Last name";
    std::cout<< "|";std::cout<< "nick name";
    std::cout<< "|"; std::cout<< "\n";
    for(i=0;i< Contact.index; i++)
    {
        std::cout << "|";
            std::cout<< std::setw(strlen("index"));std::cout << i + 1;std::cout << "|";
            std::cout<< std::setw(strlen("First name"));std::cout << Contact.tab[i][0];std::cout << "|";
            std::cout<< std::setw(strlen("Last name"));std::cout << Contact.tab[i][1];std::cout << "|";
            std::cout<< std::setw(strlen("nick name"));std::cout << Contact.tab[i][2];std::cout << "|";
   
        std::cout << "\n";
    }
    

}
void PhoneBook::EXIT_func()
{
    exit(0);
}