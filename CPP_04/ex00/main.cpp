/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:07:22 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:39:23 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
    std::cout << "---------------------------------" << std::endl;
    {
        const Animal* j = new Cat();
        const Animal* meta = j;

        std::cout << meta->getType() << " " << std::endl;
        j->makeSound();
        meta->makeSound();
        delete meta;
    }
    std::cout << "---------------------------------" << std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();
        const WrongCat* j = new WrongCat();

        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
    return 0;
}
