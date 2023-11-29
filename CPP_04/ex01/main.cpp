/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:04:57 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:44:11 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        delete j;
        delete i;
    }
    std::cout << "---------------------" << std::endl;
    {
        Animal* animals[10];
        
        std::cout << "Creating 10 animals:" << std::endl;
        for (int i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
            {
                animals[i] = new Dog();
            }
            else
            {
                animals[i] = new Cat();
            }
        }
        std::cout << std::endl
            << "Destroying 10 animals:" << std::endl;
        for (int i = 0; i < 10; i++)
        {
            delete animals[i];
        }
    }
    std::cout << "---------------------" << std::endl;
    {
        const Dog       d;
        const Dog       dcopy(d);
        const Cat       c;
        const Cat       ccopy(c);
    }
    std::cout << "---------------------" << std::endl;
    {
        Dog       d;
        Dog       dcopy(d);
        Cat       c;
        Cat       ccopy;

        dcopy = d;
        ccopy = c;
    }
    std::cout << "---------------------" << std::endl;
    {
        Dog basic;
        {
            Dog tmp = basic;
        }
    }
    return 0;
}
