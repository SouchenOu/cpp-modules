
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

void ADD_func()
{
    std::string firstName;
    std::string lastName;
    std::string PhoneNumber;
    std::string darkestSecret;

        std::cout << "Enter yout first name:\n";
        getline(std::cin,firstName);
        std::cout << "Enter yout lastName:\n";
        getline(std::cin,lastName);
        std::cout << "Enter yout PhoneNumber:\n";
        getline(std::cin,PhoneNumber);
        std::cout << "Enter yout darkestSecret:\n";
        getline(std::cin,darkestSecret);


}
void SEARCH_func()
{


}
void EXIT_func()
{


}
int main()
{
    std::string choice;
    while(1)
    {
        std::cout << "Our libirary:";
        std::cout << "1: ADD:    enregistrer un nouveau contact\n";
        std::cout << "2: SEARCH: affiche le contact demandé\n";
        std::cout << "3: EXIT:   quitte le program\n";
        std::cout << "Enter your choice now: -> ";
        getline(std::cin,choice);
        if(choice.compare("ADD"))
            ADD_func();
        if(choice.compare("SEARCH"))
            SEARCH_func();
        if(choice.compare("EXIT"))
            EXIT_func();

    }
}