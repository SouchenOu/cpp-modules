/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/18 17:39:34 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(){index=0, count = 0;}

int	Phonebook::getCount() const
{
	return this->count;
}

void Phonebook::setContact(Contact contact)
{
	this->contacts[this->index] = contact;
	count = (count < 8) ? count + 1 : count;
	this->index = (this->index + 1) % 8;
	return;
}

    //setter
void PhoneBook::setPhoneBook(std::string firstname, std::string lastname,std::string nickname, std::string phonenumber, std::string darkestsecret)
{
    MyContact[index].setFirstName(firstname);
    MyContact[index].setLastName(lastname);
    MyContact[index].setNickName(nickname);
    MyContact[index].setPhonenumber(phonenumber);
    MyContact[index].setDarkestsecret(darkestsecret);
    index++;
    std::cout << "\n";
     
}
void PhoneBook::ADD_func(PhoneBook *phoneBokk)
{
    Contact c;
   	std::string str;
    std::cout << "First name: ";
	std::getline(std::cin, str);
	c.setFirstName(str);
	std::cout << "Last name: ";
	std::getline(std::cin, str);
	ct.setLastName(str);
	std::cout << "Nickname: ";
	std::getline(std::cin, str);
	c.setNickName(str);
	std::cout << "Phone number: ";
	std::getline(std::cin, str);
	c.setPhoneNumber(str);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, str);
	c.setSecret(str);
	phonebook->setContact(c);  
        
}
std::string truncate(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::SEARCH_func(PhoneBook Contact)
{
    int index;
	int count;

	count = phonebook->getCount();
	std::cout << "***************************************************************************************************************************************" << std::endl;
	std::cout << "$$" << std::setw(10) << std::right << "index";
	std::cout << "$$" << std::setw(10) << std::right << "first name";
	std::cout << "$$" << std::setw(10) << std::right << "last name";
	std::cout << "$$" << std::setw(10) << std::right << "nickname" << std::endl;
	std::cout << "***************************************************************************************************************************************" << std::endl;
	for (int i=0; i < phonebook->getCount(); i++)
	{
		Contact contact;
		contact = phonebook->getContact(i);
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(contact.getFirstName());
		std::cout << "|" << std::setw(10) << truncate(contact.getLastName());
		std::cout << "|" << std::setw(10) << truncate(contact.getNickName()) << "|" << std::endl;
	}
	std::cout << "*******************************************************************************************" << std::endl;
	if (count > 0)
	{
		std::cout << "Please enter an index for relevant information: ";
		while (!(std::cin >> index) || index > count || index < 1)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter an index between 1 and " << count << ": ";
		}
		index--;
		Contact tmp;
		tmp = phonebook->getContact(index);
		std::cout << std::endl;
		std::cout << "First name - " << tmp.getFirstName() << std::endl;
		std::cout << "Last name - " << tmp.getLastName() << std::endl;
		std::cout << "Nickname - " << tmp.getNickName() << std::endl;
		std::cout << "Phone number - " << tmp.getPhoneNumber() << std::endl;
		std::cout << "Darkest secret - " << tmp.getSecret() << std::endl;
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
