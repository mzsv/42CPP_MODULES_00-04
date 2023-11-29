/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:20:32 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:49:13 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

    public:
        Fixed(void);
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed& obj);
        ~Fixed(void);

        Fixed&  operator=(const Fixed& obj);

        /* comparison operators */
        bool    operator>(const Fixed& obj) const;
        bool    operator<(const Fixed& obj) const;
        bool    operator>=(const Fixed& obj) const;
        bool    operator<=(const Fixed& obj) const;
        bool    operator==(const Fixed& obj) const;
        bool    operator!=(const Fixed& obj) const;

        /* arithmetic operators */
        Fixed   operator+(const Fixed& obj) const;
        Fixed   operator-(const Fixed& obj) const;
        Fixed   operator*(const Fixed& obj) const;
        Fixed   operator/(const Fixed& obj) const;

        /* increment and decrement operators */
        Fixed&  operator++(void);
        Fixed&  operator--(void);
        Fixed   operator++(int);
        Fixed   operator--(int);

        /* member functions */
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt( void ) const;
        
        /* static max and min functions */
        static  Fixed&  min(Fixed& a, Fixed& b);
        static  Fixed&  max(Fixed& a, Fixed& b);
        static  const Fixed&  min(const Fixed& a, const Fixed& b);
        static  const Fixed&  max(const Fixed& a, const Fixed& b);
};

std::ostream&   operator<<(std::ostream& out, const Fixed& obj);

#endif
