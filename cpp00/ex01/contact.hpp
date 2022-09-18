/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/18 17:19:58 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {       
    private:            
        std::string firstname;       
        std::string lastname;  
        std::string  nickname;
        std::string phonenumber;
        std::string darkestsecret;
   public:

    //constructer

    Contact();
    Contact(std::string Firstname, std::string Lastname,std::string  Nickname, std::string Phonenumber, std::string Darkestsecret);
    
    //setters
    void setFirstName(std::string Firstname);
    
    void setLastName(std::string Lastname);
    
    void setNickName(std::string Nickname);
    
    void setPhonenumber(std::string Phonenumber);
    
    void setDarkestsecret(std::string Darkestsecret);

    //getters
    std::string getFirstName(void);
    std::string getLastname(void);
    std::string getNickName(void);
    std::string getPhonenumber(void);
    std::string getDarkestsecret(void);
    
    
};