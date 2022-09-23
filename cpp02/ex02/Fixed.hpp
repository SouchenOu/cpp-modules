/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/23 17:43:28 by souchen          ###   ########.fr       */
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
        Fixed(float number);
        Fixed(const Fixed &var);
        ~Fixed();
        Fixed *operator= (const Fixed &var);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed operator++(void);// Prefix increment operator.
        Fixed operator++(int);//Postfix increment operator.
        Fixed operator--(void);//Prefix decrement operator.
        Fixed operator--(int);// Postfix decrement operator.
        static Fixed &min(Fixed &x, Fixed &y);
        static const Fixed &min(Fixed const &x, Fixed const &y);
        static Fixed &max(Fixed &x, Fixed &y);
        static const Fixed &max(Fixed const &x, Fixed const &y);
};
