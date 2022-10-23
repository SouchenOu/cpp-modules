/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 13:46:32 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	
	try
	{
		Bureaucrat candida1("Ahmed", -1);
		Bureaucrat candida2("souchen", 152);
		candida1.incrementGrade();
		candida2.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
