/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 11:28:02 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

/*Pointers to member functions are not like regular pointers to functions, because member functions
have a hidden "this" parameter, and so can only be called if you supply an object to play the role of
"this", and use some special syntax to tell the compiler to set up the call using the hidden “this”
parameter.*/

Harl::~Harl(void)
{
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"
	};
	void (Harl::*fun[4])(void) = {// fun  pointer to member fonction
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int tab = (
		(level == "DEBUG") * 0 + (level == "INFO") * 1 + (level == "WARNING") * 2
		+(level == "ERROR") * 3
	);
	(this->*fun[tab])();
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!" << "\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month.." << "\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << "\n";
}
