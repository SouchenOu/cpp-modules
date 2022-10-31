/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:30:30 by souchen           #+#    #+#             */
/*   Updated: 2022/10/31 21:44:54 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "span.hpp"
#include <iostream>

int main()
{
        {
                Span sp = Span(5);

                try
                {
                        sp.addNumber(5);
                        sp.addNumber(3);
                        sp.addNumber(17);
                        sp.addNumber(9);
                        sp.addNumber(11);
                        
                }
                catch (const std::exception& e)
                {
                        std::cerr << e.what() << std::endl;
                }

                std::cout << "Shortest span " <<sp.shortestSpan() << std::endl;
                std::cout << "Longest span "<<sp.longestSpan() << std::endl;
        }
        
                Span sp2 = Span(10000);
                std::vector<int> vector2;
                std::vector<int>::iterator j;
                
                // 20000 at the very end, which means shortest span is 1 and longest span is 10001

                try
                {
                        for (int i = 1; i < 10000; i++)
                               sp2.addNumber(i);
                        /*for(j = vector2.begin(); j < vector2.end(); j++)
                        {
                                std::cout << *j << "\n";
                        }*/
                        std::cout << "Shortest span :" <<sp2.shortestSpan() << "\n";
                        std::cout << "Longest span :"<<sp2.longestSpan() << std::endl;
                }
                catch (const std::exception& e)
                {
                        std::cerr << e.what() << std::endl;
                }
        
}
