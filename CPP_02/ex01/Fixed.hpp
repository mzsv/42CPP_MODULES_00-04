/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:07:45 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:47:25 by amenses-         ###   ########.fr       */
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
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt( void ) const;
};

std::ostream&   operator<<(std::ostream& out, const Fixed& obj);

#endif
