/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/09 11:28:21 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
int main() 
{
Intern someRandomIntern;
Form* rrf;
rrf = someRandomIntern.makeForm("robotomy request", "Bender");

}

/**Pointeurs de fonctions
Il est possible de faire des pointeurs de fonctions. Un pointeur de fonction contient l'adresse du début du code binaire constituant la fonction. Il est possible d'appeler une fonction dont l'adresse est contenue dans un pointeur de fonction avec l'opérateur d'indirection *.

Pour déclarer un pointeur de fonction, il suffit de considérer les fonctions comme des variables. Leur déclaration est identique à celle des tableaux, en remplaçant les crochets par des parenthèses :

type (*identificateur)(paramètres);*/


////example:

/*int f(int i, int j)   //Définit une fonction. 
{
    return i+j;
}

int (*pf)(int, int);  // Déclare un pointeur de fonction. 

int main(void)
{
    int l, m;         // Déclare deux entiers. 
    pf = &f;          // Initialise pf avec l'adresse de la fonction f. 
    printf("Entrez le premier entier : ");
    scanf("%u",&l);   // Initialise les deux entiers. 
    printf("\nEntrez le deuxième entier : ");
    scanf("%u",&m);

// Utilise le pointeur pf pour appeler la fonction f
//   et affiche le résultat : 

    printf("\nLeur somme est de : %u\n", (*pf)(l,m));
    return 0;
}*/