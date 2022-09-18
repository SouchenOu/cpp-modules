
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
        getline(std::cin,c.tab[i]);
        firstName = c.tab[i];
        i++;
        std::cout << "Enter your lastName:\n";
        getline(std::cin,c.tab[i]);
        i++;
        std::cout << "Enter your NickName:\n";
        getline(std::cin,c.tab[i]);
        i++;
        std::cout << "Enter your PhoneNumber:\n";
        getline(std::cin,c.tab[i]);
        i++;
        std::cout << "Enter your darkestSecret:\n";
        getline(std::cin,c.tab[i]);
         
         std::cout << c.tab[0];
        contact_elem.setPhoneBook(firstName,lastName,nickName,PhoneNumber,darkestSecret);
        std::cout << c.firstname; 
        for(i=0;i<5;i++)
        {
            std::cout << c.tab[i];
            std::cout<< "\n";
        }
        //std::string test = getFirstName();
        //std::cout<< test;
}
void SEARCH_func(Contact c)
{
    int i;
    int j;
    i = 0;
    j=0;
     for(i=0;i<5;i++)
    {
        std::cout << c.tab[i];
        std::cout<< "\n";
    }
    PhoneBook contact;
    std::cout << "here\n";
    std::cout<< "|"; std::cout<< "index"; 
    std::cout<< "|";std::cout<< "First name";
    std::cout<< "|";std::cout<< "Last name";
    std::cout<< "|";std::cout<< "nick name";
    std::cout<< "|"; std::cout<< "\n";
    for(i=0;i< contact.index; i++)
    {
        for(j=0;j<5;j++)
        {
            std::cout << "|";std::cout << c.tab[j];std::cout << "    |";
        }
    }
    

}
void EXIT_func()
{


}
int main()
{
    std::string choice;
    PhoneBook contact_elem;
    Contact c;
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
            SEARCH_func(c);
        if(choice.compare("EXIT"))
            EXIT_func();

    }
}