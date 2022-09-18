/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/18 15:31:58 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {       
    public:            
        std::string firstname;       
        std::string lastname;  
        std::string  nickname;
        std::string phonenumber;
        std::string darkestsecret;
        std::string tab[6];
   public:

    //constructer

    Contact(){
        int i =0;
        for(i=0;i<5;i++)
        {
            tab[i] = std::string();
        }
    }
    Contact(std::string Firstname, std::string Lastname,std::string  Nickname, std::string Phonenumber, std::string Darkestsecret)
    {
        firstname=Firstname;
        lastname=Lastname;
        nickname=Nickname;
        phonenumber=Phonenumber;
        darkestsecret=Darkestsecret;
    }
    //setters
    void setFirstName(std::string Firstname)
    {
        firstname=Firstname;
    
    }
    void setLastName(std::string Lastname)
    {
        lastname=Lastname;
    }
    void setNickName(std::string Nickname)
    {
        nickname=Nickname;
    }
    void setPhonenumber(std::string Phonenumber)
    {
        phonenumber=Phonenumber;
    }
    void setDarkestsecret(std::string Darkestsecret)
    {
        darkestsecret=Darkestsecret;
    }
    //getters
    std::string getFirstName(void)
    {
        return firstname;
    }
    std::string getLastname(void)
    {
        return lastname;
    }
    std::string getNickName(void)
    {
        return nickname;
    }
    std::string getPhonenumber(void)
    {
        return phonenumber;
    }
    std::string getDarkestsecret(void)
    {
        return darkestsecret;
    }
    
};