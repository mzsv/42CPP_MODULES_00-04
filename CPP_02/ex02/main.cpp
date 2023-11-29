/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:20:15 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:49:18 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    {
        Fixed       a;
        Fixed const b(Fixed(5.05f) * Fixed(2));

        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;

        std::cout << b << std::endl;
        
        std::cout << Fixed::max(a, b) << std::endl;
    }
    {
        std::cout << "---------------------" << std::endl;
        Fixed   a(10);
        Fixed   b(10.1f);
        Fixed   c(0);
        
        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;
        std::cout << "c: " << c << std::endl;
        std::cout << "a > b: " << (a > b) << std::endl;
        std::cout << "a < b: " << (a < b) << std::endl;
        std::cout << "a >= b: " << (a >= b) << std::endl;
        std::cout << "a <= b: " << (a <= b) << std::endl;
        std::cout << "a == b: " << (a == b) << std::endl;
        std::cout << "a != b: " << (a != b) << std::endl;
        std::cout << "a + b: " << (a + b) << std::endl;
        std::cout << "a - b: " << (a - b) << std::endl;
        std::cout << "a * b: " << (a * b) << std::endl;
        std::cout << "a / b: " << (a / b) << std::endl;
        std::cout << "a / c (c = 0): " << (a / c) << std::endl;
        std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
        std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
        std::cout << "---------------------" << std::endl;
    }
    return 0;
}
