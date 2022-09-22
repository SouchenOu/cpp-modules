/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/22 20:13:48 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*class AE {
    // ...
public:
    static const int c6 = 7;
    static const int c7 = 31;
};
const int AE::c7;*/
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