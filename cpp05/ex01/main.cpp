/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 16:32:07 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{

		Bureaucrat candida1("Ahmed", 141); //grade = 140
		Bureaucrat candida2("souchen", 100);
		Bureaucrat candid;
		Form form1("Ahmed"); // here grade required = 0;
		Form form2("someone", 100 ,20); // here grade required = 100
		Form form3("anyone" ,140, 80);
		Form form4("anyone" ,80, 10);
	
		//form1.beSigned(candida1); // will throw exception here
		//candida1.signForm(form1);
		candida2.signForm(form2); // will be signed here because grade == grade required
		/***********/
		//form3.beSigned(candida1); // will be signed because grade = 140 and grade require = 140
		candida1.signForm(form3);// will be throw because grade sup than grade required
		/***********/
		candida2.incrementGrade(); // grade here will be 99
		//form4.beSigned(candida2); // will throw 
		/*************/
		candida1.incrementGrade(); // grade here will be 140 here grade will be equal grade require
		candida1.signForm(form3);// will be sign
		/***********/		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
