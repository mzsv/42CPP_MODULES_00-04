/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:45:57 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:52:15 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point  a(1, 1);
    Point  b(1, 10);
    Point  c(10, 1);
    Point  point1(5, 1);
    Point  point2(5, 2);
    Point  point3(0, 0);
    
    std::cout << "a: " << a.getX() << ", " << a.getY() << std::endl;
    std::cout << "b: " << b.getX() << ", " << b.getY() << std::endl;
    std::cout << "c: " << c.getX() << ", " << c.getY() << std::endl;
    std::cout << "point: " << point1.getX() << ", " << point1.getY() << std::endl;
    std::cout << "is point in ABC: " << bsp(a, b, c, point1) << std::endl;
    std::cout << "point: " << point2.getX() << ", " << point2.getY() << std::endl;
    std::cout << "is point in ABC: " << bsp(a, b, c, point2) << std::endl;
    std::cout << "point: " << point3.getX() << ", " << point3.getY() << std::endl;
    std::cout << "is point in ABC: " << bsp(a, b, c, point3) << std::endl;
    return 0;
}
