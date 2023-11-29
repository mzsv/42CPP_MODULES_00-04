/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:08:18 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:42:41 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const& animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const& animal)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &animal)
    {
        this->_type = animal._type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "Animal: ..." << std::endl;
}
