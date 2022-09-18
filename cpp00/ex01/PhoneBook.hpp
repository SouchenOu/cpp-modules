/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/18 14:00:57 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"


class PhoneBook {       
    public:   
        Contact MyContact[8];
        int index;
    public:
    PhoneBook(){index=0;}
    //setters
    void setPhoneBook(std::string firstname, std::string lastname,std::string nickname, std::string phonenumber, std::string darkestsecret)
    {
        MyContact[index].setFirstName(firstname);
        MyContact[index].setLastName(lastname);
        MyContact[index].setNickName(nickname);
        MyContact[index].setPhonenumber(phonenumber);
        MyContact[index].setDarkestsecret(darkestsecret);
        index++;
        std::cout << "\n";
        
    }
    

};