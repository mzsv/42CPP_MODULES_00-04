/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:40:47 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:46:07 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

    public:
        Fixed(void);
        Fixed(const Fixed& src);
        ~Fixed(void);
        Fixed&  operator=(const Fixed& src);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif
