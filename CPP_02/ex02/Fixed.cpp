/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:20:24 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:49:07 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* default constructor */
Fixed::Fixed() :
    _fixedPointValue(0)
{
    /* std::cout << "Default constructor called" << std::endl; */
}

/* copy constructor */
Fixed::Fixed(Fixed const &obj)
{
    /* std::cout << "Copy constructor called" << std::endl; */
    *this = obj;
}

/* int to fixed point constructor */
Fixed::Fixed(const int value)
{
    /* std::cout << "Int constructor called" << std::endl; */
    this->_fixedPointValue = value << this->_fractionalBits;
}

/* float to fixed point constructor */
Fixed::Fixed(const float value)
{  
    /* std::cout << "Float constructor called" << std::endl; */
    this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

/* destructor */
Fixed::~Fixed()
{
    /* std::cout << "Destructor called" << std::endl; */
}

/* assignment operator */
Fixed&  Fixed::operator=(Fixed const &obj)
{
    /* std::cout << "Copy assignment operator called" << std::endl; */
    this->setRawBits(obj.getRawBits());
    return *this;
}

/* > operator */
bool    Fixed::operator>(Fixed const &obj) const
{
    return this->_fixedPointValue > obj.getRawBits();
}

/* < operator */
bool    Fixed::operator<(Fixed const &obj) const
{
    return obj > *this;
}

/* >= operator */
bool    Fixed::operator>=(Fixed const &obj) const
{
    return !(*this < obj);
}

/* <= operator */
bool    Fixed::operator<=(Fixed const &obj) const
{
    return !(*this > obj);
}

/* == operator */
bool    Fixed::operator==(Fixed const &obj) const
{
    return this->_fixedPointValue == obj.getRawBits();
}

/* != operator */
bool    Fixed::operator!=(Fixed const &obj) const
{
    return !(*this == obj);
}

/* + operator */
Fixed   Fixed::operator+(Fixed const &obj) const
{
    return Fixed(this->toFloat() + obj.toFloat());
}

/* - operator */
Fixed   Fixed::operator-(Fixed const &obj) const
{
    return Fixed(this->toFloat() - obj.toFloat());
}

/* * operator */
Fixed   Fixed::operator*(Fixed const &obj) const
{
    return Fixed(this->toFloat() * obj.toFloat());
}

/* / operator */
Fixed   Fixed::operator/(Fixed const &obj) const
{
    return Fixed(this->toFloat() / obj.toFloat());
}

/* pre ++ operator */
Fixed&  Fixed::operator++(void)
{
    this->_fixedPointValue++;
    return *this;
}

/* post ++ operator */
Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

/* pre -- operator */
Fixed&  Fixed::operator--(void)
{
    this->_fixedPointValue--;
    return *this;
}

/* post -- operator */
Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

int     Fixed::getRawBits() const
{
    return this->_fixedPointValue;
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

float   Fixed::toFloat(void) const
{
    return (float)this->_fixedPointValue / (1 << this->_fractionalBits);
}

int     Fixed::toInt( void ) const
{
    return this->_fixedPointValue >> this->_fractionalBits;
}

Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    return a < b ? a : b;
}

Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    return a > b ? a : b;
}

const Fixed&  Fixed::min(const Fixed& a, const Fixed& b)
{
    return a < b ? a : b;
}

const Fixed&  Fixed::max(const Fixed& a, const Fixed& b)
{
    return a > b ? a : b;
}

std::ostream&    operator<<(std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat();
    return out;
}
