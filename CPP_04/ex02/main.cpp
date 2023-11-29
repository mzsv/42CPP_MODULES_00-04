/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:36:14 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:46:33 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    {
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();

        delete j;
        delete i;
    }
    std::cout << "---------------------" << std::endl;
    {
        AAnimal* animals[10];
        
        std::cout << "Creating 10 animals:" << std::endl;
        for (int i = 0; i < 10; i++) {
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
        /* Dog             d;
        const AAnimal*  j = &d;
        
            AAnimal         a; 
            // error: cannot declare variable ‘a’ to be of abstract type ‘AAnimal’
        */
    }
    return 0;
}
