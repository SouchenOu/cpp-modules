/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/06 13:17:03 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Harl harl;

	if (argc == 2)
	{
		std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
		int i = 0;
		while (i < 4 && levels[i] != argv[1])
			i++;
		switch (i)
		{
			case 0:
				std::cout << "[ " << levels[0] << " ]" << "\n";
				harl.complain(levels[0]);
				std::cout << "\n";
			case 1:
				std::cout << "[ " << levels[1] << " ]" << "\n";
				harl.complain(levels[1]);
				std::cout << "\n";
			case 2:
				std::cout << "[ " << levels[2] << " ]" << "\n";
				harl.complain(levels[2]);
				std::cout << "\n";
			case 3:
				std::cout << "[ " << levels[3] << " ]" << "\n";
				harl.complain(levels[3]);
				std::cout << "\n";
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}

/*int somme(int i, int j)
{
    return i+j;
}

int multiplication(int i, int j)
{
    return i*j;
}

int quotient(int i, int j)
{
    return i/j;
}

int modulo(int i, int j)
{
    return i%j;
}

typedef int (*fptr)(int, int);
fptr ftab[4];

int main(void)
{
    int i,j,n;
	i = 1;
	j = 2;
	n = 3;
    ftab[0]=&somme;          // Initialise le tableau de pointeur 
    ftab[1]=&multiplication; // de fonctions. 
    ftab[2]=&quotient;
    ftab[3]=&modulo;
    if (n < 4 && n >= 0)
       std::cout<<"\nRésultat :\n" << (*(ftab[n]))(i,j) ;
    else
        std::cout<<"\nMauvais numéro de fonction.\n";
    return 0;
}*/




