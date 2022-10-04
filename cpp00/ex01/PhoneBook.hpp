/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/04 18:00:31 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"


class PhoneBook {       
    private:   
        Contact MyContact[8];
       // std::string tab[10][11];
      	int	count;
        int index;
    public:
        PhoneBook();
        //setters
        Contact getContact(int index) const;
	    int		getCount() const;
	    // Setter
	    void setContact(Contact contact);
        //functions
        void ADD_func(PhoneBook *contact_elem);
        void SEARCH_func(PhoneBook Contact);
        void EXIT_func();

};
