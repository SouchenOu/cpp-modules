/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/22 09:06:40 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"
#include <iostream>

 Harl:: Harl(void)
{
}

 Harl::~ Harl(void)
{
}

void  Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"
	};
	void (Harl::*fun[4])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*fun[i])();
	}
}

void Harl::debug(void)
{
	std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn�t put enough bacon in my burger! If you did, I wouldn�t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << " I think I deserve to have some extra bacon for free. I�ve been coming for years whereas you started working here since last month.." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
