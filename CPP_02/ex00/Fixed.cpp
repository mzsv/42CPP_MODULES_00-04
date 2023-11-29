/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:40:59 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:46:01 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :
    _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(src.getRawBits());
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&    Fixed::operator=(Fixed const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(src.getRawBits());
    return *this;
}

int     Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}
