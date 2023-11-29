/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:46:35 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:53:10 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        const Fixed _x;
        const Fixed _y;
    
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& obj);
        ~Point();
        Point& operator=(const Point& obj);
        Fixed getX(void) const;
        Fixed getY(void) const;
};

bool    bsp( Point const a, Point const b, Point const c, Point const point);

#endif
