/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:11:06 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:43:23 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& animal) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = animal;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& animal)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &animal)
    {
        this->_type = animal._type;
    }
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal: ..." << std::endl;
}
