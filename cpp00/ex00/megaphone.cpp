/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/15 19:00:49 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if(argc == 1)
    {
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE"; 
    }
    else{
        while(argv[i] != NULL)
        {
            j = 0;
            while(argv[i][j] != '\0')
            {
                if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
                {
                    std::cout<< (char)toupper(argv[i][j]);
                }
                else{
                    std:: cout << argv[i][j];
                }
                j++;
            }
            i++;
        }
        std::cout << "\n";
    }
}