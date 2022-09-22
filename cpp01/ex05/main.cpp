/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/22 12:40:35 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl harl;

	std::cout << "DEBUG: " << std::endl;
	harl.complain("DEBUG");
	std::cout << "INFO: " << std::endl;
	harl.complain("INFO");
	std::cout << "WARNING: " << std::endl;
	harl.complain("WARNING");
	std::cout << "ERROR: " << std::endl;
	harl.complain("ERROR");
}
