/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/05 11:23:39 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat candida1("Ahmed", 10);
	Bureaucrat candida2("souchen", 100);
	Form f("Ahmed");
	

	try
	{
		std::cout << candida1 << std::endl;
		std::cout << candida2 << std::endl;
		std::cout << f << std::endl;
		f.beSigned(candida1);
		candida1.incrementGrade();
		candida2.decrementGrade();
		/*std::cout << candida1<< std::endl;
		std::cout << candida2 << std::endl;
		Employe.incrementGrade();
		student.decrementGrade();
		std::cout << candida1 << std::endl;
		std::cout <<candida2 << std::endl;*/
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
