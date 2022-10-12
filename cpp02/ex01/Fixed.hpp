/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/12 13:32:02 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Fixed
{
    private:
        int a;
        static const int b = 8;
    public:
        Fixed();
        Fixed(const float number);
        Fixed(int const number);
        Fixed(const Fixed &var);
        ~Fixed();
        Fixed *operator= (const Fixed &var);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &name);