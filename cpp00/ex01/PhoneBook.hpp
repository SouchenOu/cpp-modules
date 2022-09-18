/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/18 17:20:15 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"


class PhoneBook {       
    private:   
        Contact MyContact[8];
        std::string tab[10][11];
        int index;
    public:
    PhoneBook();
    //setters
    void setPhoneBook(std::string firstname, std::string lastname,std::string nickname, std::string phonenumber, std::string darkestsecret);
    void ADD_func(PhoneBook &contact_elem);
    void SEARCH_func(PhoneBook Contact);
    void EXIT_func();

};