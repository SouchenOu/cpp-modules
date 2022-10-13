/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 09:56:59 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string &stringREF = variable;// stringREF est un autre nom pour variable
   
    std::cout << "The memory address of the string variable => " << &variable << "\n";
    std::cout << "The memory address held by stringPTR => " << stringPTR << "\n";
    std::cout << "The memory address held by stringREF => " << &stringREF << "\n";

    std::cout << "The value of the string variable => " << variable << "\n";
    std::cout << "The value pointed to by stringPTR => " << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF => " << stringREF << "\n";
}

