/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/16 13:25:51 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {       
    private:            
        std::string firstname;       
        std::string lastname;  
        std::string phonenumber;
        std::string darkestsecret;
   public:

    //constructer

    Contact(){}
    Contact(std::string firstname, std::string lastname, std::string phonenumber, std::string darkestsecret)
    {
        firstname=firstname;
        lastname=lastname;
        phonenumber=phonenumber;
        darkestsecret=darkestsecret;
    }
    //setters
    void setFirstName(std::string firstname)
    {
        firstname=firstname;
    
    }
    void setLastName(std::string lastname)
    {
        lastname=lastname;
    }
    void setPhonenumber(std::string phonenumber)
    {
        phonenumber=phonenumber;
    }
    void setDarkestsecret(std::string firstname)
    {
        darkestsecret=darkestsecret;
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
    std::string getPhonenumber(void)
    {
        return phonenumber;
    }
    std::string getDarkestsecret(void)
    {
        return darkestsecret;
    }
    
};