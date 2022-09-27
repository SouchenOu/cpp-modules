/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/27 12:21:18 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*int main()
{
	Bureaucrat Employe("Ahmed", 10);
	Bureaucrat student("souchen", 100);

	try
	{
		std::cout << Employe << std::endl;
		std::cout << student << std::endl;
		Employe.incrementGrade();
		student.decrementGrade();
		std::cout << Employe<< std::endl;
		std::cout << student << std::endl;
		Employe.incrementGrade();
		student.decrementGrade();
		std::cout << Employe << std::endl;
		std::cout <<student << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}*/
//exceptions


class cexception
{
	int array[100];
	public:
		cexception()
		{
			for(int i = 0; i < 100; i++)
			{
				array[i] = i;
			}
		}
	int getElement(int x)
	{
		if(x > 100)
		{
			throw xBig();
		}
		else if(x < 0)
		{
			throw xSmall();
		}
	}	
	class xBig{};
	class xSmall{};	
};
int main()
{
	// we use try catch to handling a problem 
	/*try{
		int momAge = 30;
		int sonAge = 34;
		if(sonAge > momAge) // here there is error so we will catch it or handling it 
		{
			throw 99;
		}
	}catch(int x) // we can do catch(.....) if we write just throw with no variable
	{
		std::cout << "son can not be older than mom , Error number" << x << "\n";
	}*/
	/*****************************/
	int i = 0;
	cexception c;
	try{
		std::cout<< "Enter an element\n";
		std::cin >> i;
		c.getElement(i);
	}catch(cexception::xBig){
		std::cout << "Big element\n";
		
	}catch (cexception::xSmall)
	{
		std::cout<< "Small element\n";
	}
}
