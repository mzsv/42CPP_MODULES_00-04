/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:08:18 by amenses-          #+#    #+#             */
/*   Updated: 2023/09/21 19:29:49 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& animal)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = animal;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& animal)
{
    std::cout << "AAnimal assignment operator called" << std::endl;
    if (this != &animal)
        this->_type = animal._type;
    return *this;
}

std::string AAnimal::getType() const
{
    return this->_type;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal: ..." << std::endl;
}
