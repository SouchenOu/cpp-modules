
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/16 13:12:56 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include<string>
#include"PhoneBook.hpp"


void ADD_func(PhoneBook &contact_elem)
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
        //std::string test = getFirstName();
        //std::cout<< test;
}
void SEARCH_func(PhoneBook Contact)
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
            std::cout << i+1;std::cout << "    |";
            std::cout << Contact.tab[i][0];std::cout << "        |";
            std::cout << Contact.tab[i][1];std::cout << "       |";
            std::cout << Contact.tab[i][2];std::cout << "       |";
   
        std::cout << "\n";
    }
    

}
void EXIT_func()
{
    exit(0);
}
int main()
{
    std::string choice;
    PhoneBook contact_elem;
    while(1)
    {
        std::cout << "\nOur Library:\n";
        std::cout << "1: ADD:    enregistrer un nouveau contact\n";
        std::cout << "2: SEARCH: affiche le contact demandé\n";
        std::cout << "3: EXIT:   quitte le program\n";
        std::cout << "Enter your choice now: -> ";
        getline(std::cin,choice);
        if(choice.compare("ADD") == 0)
            ADD_func(contact_elem);
        if(choice.compare("SEARCH") == 0)
            SEARCH_func(contact_elem);
        if(choice.compare("EXIT")== 0)
            EXIT_func();

    }
}