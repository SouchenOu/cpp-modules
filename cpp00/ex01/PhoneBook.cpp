/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/04 18:12:30 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(){index=0, count=0;}

int	PhoneBook::getCount() const
{
	return this->count;
}

void PhoneBook::setContact(Contact contact)
{
	this->MyContact[this->index] = contact;
	if(count < 8)
	{
		count++;
	}
	this->index = (this->index + 1) % 8;
	return;
}
//getContact
Contact PhoneBook::getContact(int index) const
{
	return this->MyContact[index];
	
}
void PhoneBook::ADD_func(PhoneBook *phoneBook)
{
    Contact c;
   	std::string str;
    std::cout << "First name: ";
	std::getline(std::cin, str);
	c.setFirstName(str);
	std::cout << "Last name: ";
	std::getline(std::cin, str);
	c.setLastName(str);
	std::cout << "Nickname: ";
	std::getline(std::cin, str);
	c.setNickName(str);
	std::cout << "Phone number: ";
	std::getline(std::cin, str);
	c.setPhoneNumber(str);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, str);
	c.setDarkestSecret(str);
	phoneBook->setContact(c);  
        
}
std::string truncate(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::SEARCH_func(PhoneBook phoneBook)
{
    int index;
	int count;

	count = phoneBook.getCount();
	std::cout << "*****************************************************" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "index";
	std::cout << "|" << std::setw(10) << std::right << "first name";
	std::cout << "|" << std::setw(10) << std::right << "last name";
	std::cout << "|" << std::setw(10) << std::right << "nickname" << std::endl;
	std::cout << "*****************************************************" << std::endl;
	for (int i=0; i < phoneBook.getCount(); i++)
	{
		Contact contact;
		contact = phoneBook.getContact(i);
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(contact.getFirstName());
		std::cout << "|" << std::setw(10) << truncate(contact.getLastName());
		std::cout << "|" << std::setw(10) << truncate(contact.getNickName()) << "|" << std::endl;
	}
	std::cout << "*****************************************************" << std::endl;
	if (count > 0)
	{
		std::cout << "Please enter an index to display the contact informations: ";
		while (!(std::cin >> index) || index > count || index < 1)
		{
			std::cout << "Invalid input. Please enter an index between 1 and " << count << ": ";
		}
		index--;
		Contact ContactAff;
		ContactAff = phoneBook.getContact(index);
		std::cout << std::endl;
		std::cout << "First name: " << ContactAff.getFirstName() << std::endl;
		std::cout << "Last name: " << ContactAff.getLastName() << std::endl;
		std::cout << "Nickname: " << ContactAff.getNickName() << std::endl;
		std::cout << "Phone number: " << ContactAff.getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << ContactAff.getDarkestSecret() << std::endl;
	}
	else
	{
		std::cout << "Table is empty!" << std::endl;
	}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}
void PhoneBook::EXIT_func()
{
    exit(0);
}
