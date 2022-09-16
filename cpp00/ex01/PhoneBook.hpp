/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/16 14:37:47 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"contact.hpp"


class PhoneBook {       
    private:   
        Contact MyContact[8];
    
    
    public:
    PhoneBook(){}
    //setters
    void setPhoneBook(std::string firstname, std::string lastname,std::string nickname, std::string phonenumber, std::string darkestsecret)
    {
        int i;
        i = 0;
        MyContact[i].setFirstName(firstname);
        MyContact[i].setLastName(lastname);
        MyContact[i].setLastName(nickname);
        MyContact[i].setPhonenumber(phonenumber);
        MyContact[i].setDarkestsecret(darkestsecret);
        i++;
        
    }

};