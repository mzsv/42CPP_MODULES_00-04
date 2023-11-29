/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:46:28 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:53:05 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :
    _x(0),
    _y(0)
{
}

Point::Point(const float x, const float y) :
    _x(x),
    _y(y)
{
}

Point::Point(const Point& obj) :
    _x(obj._x),
    _y(obj._y)
{
}

Point::~Point()
{
}

Point& Point::operator=(const Point& obj)
{
    (Fixed) this->_x = obj._x;
    (Fixed) this->_y = obj._y;
    return *this;
}

Fixed Point::getX() const
{
    return this->_x;
}

Fixed Point::getY() const
{
    return this->_y;
}
