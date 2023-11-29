/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:46:44 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:51:01 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static bool     isPointOnEdge(Point const vertex1, Point const vertex2, const Point point)
{
    Fixed   m;
    Fixed   b;

    if (vertex1.getX() == vertex2.getX())
    {
        return point.getX() == vertex1.getX() && \
            point.getY() >= Fixed::min(vertex1.getY(), vertex2.getY()) && \
            point.getY() <= Fixed::max(vertex1.getY(), vertex2.getY());
    }
    m = (vertex2.getY() - vertex1.getY()) / (vertex2.getX() - vertex1.getX());
    b = vertex1.getY() - m * vertex1.getX();
    return point.getY() == m * point.getX() + b;
}

static  Fixed   areaTriangle(const Point& a, const Point& b, const Point& c)
{
    Fixed   area;

    area = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - \
        a.getY()) + c.getX() * (a.getY() - b.getY())) / 2;
    return area < 0 ? area * (-1) : area;
}

bool            bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed   areaABC = areaTriangle(a, b, c);
    Fixed   pointAreas[3] = {areaTriangle(a, b, point), areaTriangle(a, point, c), \
        areaTriangle(point, b, c)};

    if (isPointOnEdge(a, b, point) || isPointOnEdge(a, c, point) || \
        isPointOnEdge(b, c, point))
    {
        return false;
    }
    return (areaABC == pointAreas[0] + pointAreas[1] + pointAreas[2]);
}
