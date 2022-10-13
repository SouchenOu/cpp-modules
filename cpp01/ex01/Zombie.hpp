/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 17:00:20 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {       
    private:            
       std::string nom;
       int N;
   public:
        Zombie();
        ~Zombie();
    //setter
        void setZombieName(std::string Nom);
        void setZombieN(int N);
   //getter
        std::string getZombieName();
        int getZombieN();
        void announce( void );
        Zombie* zombieHorde( int N, std::string name);
};