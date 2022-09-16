
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
#include"contact.hpp"

void ADD_func(PhoneBook &contact_elem)
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string PhoneNumber;
    std::string darkestSecret;

        std::cout << "Enter your first name:\n";
        getline(std::cin,firstName);
        std::cout << "Enter your lastName:\n";
        getline(std::cin,lastName);
        std::cout << "Enter your NickName:\n";
        getline(std::cin,nickName);
        std::cout << "Enter your PhoneNumber:\n";
        getline(std::cin,PhoneNumber);
        std::cout << "Enter your darkestSecret:\n";
        getline(std::cin,darkestSecret);

        contact_elem.setPhoneBook(firstName,lastName,nickName,PhoneNumber,darkestSecret);
}
void SEARCH_func()
{;
    std::Contact cnt = contact_elem.getPhoneBook()
    std::cout<< "|"; std::cout<< "index"; 
    std::cout<< "|";std::cout<< "First name";
    std::cout<< "|";std::cout<< "Last name";
    std::cout<< "|";std::cout<< "nick name";
    std::cout<< "|";

}
void EXIT_func()
{


}
int main()
{
    std::string choice;
    PhoneBook contact_elem;
    while(1)
    {
        std::cout << "Our Library:\n";
        std::cout << "1: ADD:    enregistrer un nouveau contact\n";
        std::cout << "2: SEARCH: affiche le contact demandé\n";
        std::cout << "3: EXIT:   quitte le program\n";
        std::cout << "Enter your choice now: -> ";
        getline(std::cin,choice);
        if(choice.compare("ADD") == 0)
            ADD_func(contact_elem);
        if(choice.compare("SEARCH"))
            SEARCH_func();
        if(choice.compare("EXIT"))
            EXIT_func();

    }
}