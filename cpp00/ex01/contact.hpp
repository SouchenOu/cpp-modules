/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/04 15:55:53 by souchen          ###   ########.fr       */
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
    
    void setPhoneNumber(std::string Phonenumber);
    
    void setDarkestSecret(std::string Darkestsecret);

    //getters
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickName(void);
    std::string getPhoneNumber(void);
    std::string getDarkestSecret(void);
    
    
};
