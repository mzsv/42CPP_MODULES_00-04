/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:08:45 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:43:11 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(Dog const& dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog&    Dog::operator=(Dog const& dog)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &dog)
    {
        this->_type = dog._type;
    }
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Dog: au au au!" << std::endl;
}
