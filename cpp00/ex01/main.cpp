
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
            contact_elem.ADD_func(&contact_elem);
        if(choice.compare("SEARCH") == 0)
            contact_elem.SEARCH_func(contact_elem);
        if(choice.compare("EXIT")== 0)
            contact_elem.EXIT_func();

    }
}