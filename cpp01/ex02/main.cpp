/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/20 14:05:50 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

/*int main()
{
    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string &stringREF = variable;
   
    
    //stringREF = "hello";

    std::cout << "The memory address of the string variable => " << &variable << "\n";
    std::cout << "The memory address held by stringPTR => " << stringPTR << "\n";
    std::cout << "The memory address held by stringREF => " << &stringREF << "\n";

    std::cout << "The value of the string variable => " << variable << "\n";
    std::cout << "The value pointed to by stringPTR => " << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF => " << stringREF << "\n";
}*/

//passage ar reference and passage par address:

//void FOO(int *a)
//{
//    *a = 42;
//}
/*void FOO(int &a)
{
    a = 15;
    
}
int main()
{
    int a = 10;
    FOO(a);
    std::cout<< a << std::endl;
    return 1;
}*/
///////////this is passage par reference int &n = nb;
/*void square(int &n)
{
    //the same address
    std::cout << "\nIn square " << &n << "\n";
    n = n + 1;
}
int main()
{
    int nb = 8;
    std::cout<< &nb << "\n";
    std::cout<< nb << "\n";
    square(nb);
    std::cout << nb << "\n";
    
} */
//////// this is passage par pointers

/*void square(int *n)
{
    //difference address
    std::cout << "\nIn square " << &n << "\n";
    *n = *n + 1;
}
int main()
{
    int nb = 8;
    std::cout<< &nb << "\n";
    std::cout<< nb << "\n";
    square(&nb);
    std::cout << nb << "\n"; 
}*/

