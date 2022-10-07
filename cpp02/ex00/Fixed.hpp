/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/07 08:39:34 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*Cette manière de faire s’appelle virgule fixe, car la position 
de la virgule est connue d’avance*/
class Fixed
{
    private:
        int a;
        static const int b = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &var);
        Fixed *operator= (const Fixed &var);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};