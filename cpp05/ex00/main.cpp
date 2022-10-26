/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/25 11:45:50 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	
	try
	{
		Bureaucrat candida1("Ahmed", 100);
		Bureaucrat candida2("souchen", 15);
		Bureaucrat b1("pp" , 12);
		//Bureaucrat b2 = b1;
		b1 = candida1;
		std::cout << b1.getName() << "\n";
		std::cout << b1.getGrade() << "\n";
		//std::cout << b2.getGrade() << "\n";
		candida1.incrementGrade();
		candida2.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
