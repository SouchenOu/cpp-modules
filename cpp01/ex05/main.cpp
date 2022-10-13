/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 11:26:30 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl harl;

	std::cout << "DEBUG: " << "\n";
	harl.complain("DEBUG");
	std::cout << "INFO: " << "\n";
	harl.complain("INFO");
	std::cout << "WARNING: " << "\n";
	harl.complain("WARNING");
	std::cout << "ERROR: " << "\n";
	harl.complain("ERROR");
}
