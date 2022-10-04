/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/18 17:21:29 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
Contact::Contact(){}
Contact::Contact(std::string Firstname, std::string Lastname,std::string  Nickname, std::string Phonenumber, std::string Darkestsecret)
    {
        firstname=Firstname;
        lastname=Lastname;
        nickname=Nickname;
        phonenumber=Phonenumber;
        darkestsecret=Darkestsecret;
    }
    //setters
    void Contact::setFirstName(std::string Firstname)
    {
        firstname=Firstname;
    
    }
    void Contact::setLastName(std::string Lastname)
    {
        lastname=Lastname;
    }
    void Contact::setNickName(std::string Nickname)
    {
        nickname=Nickname;
    }
    void Contact::setPhoneNumber(std::string Phonenumber)
    {
        phonenumber=Phonenumber;
    }
    void Contact::setDarkestSecret(std::string Darkestsecret)
    {
        darkestsecret=Darkestsecret;
    }
    //getters
    std::string Contact::getFirstName(void)
    {
        return firstname;
    }
    std::string Contact::getLastName(void)
    {
        return lastname;
    }
    std::string Contact::getNickName(void)
    {
        return nickname;
    }
    std::string Contact::getPhoneNumber(void)
    {
        return phonenumber;
    }
    std::string Contact::getDarkestSecret(void)
    {
        return Contact::darkestSecret;
    }
