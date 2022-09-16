/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/16 15:22:59 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"contact.hpp"


class PhoneBook {       
    private:   
        Contact MyContact[8];
        int index;
    
    
    public:
    PhoneBook(){}
    PhoneBook(){}
    //setters
    void setPhoneBook(std::string firstname, std::string lastname,std::string nickname, std::string phonenumber, std::string darkestsecret)
    {
        index=0;
        MyContact[index].setFirstName(firstname);
        MyContact[index].setLastName(lastname);
        MyContact[index].setLastName(nickname);
        MyContact[index].setPhonenumber(phonenumber);
        MyContact[index].setDarkestsecret(darkestsecret);
        index++;
        
    }

};