/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:08:45 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:42:18 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const& dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = dog;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog&    Dog::operator=(Dog const& dog)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &dog)
    {
        this->_type = dog._type;
        *this->brain = *dog.brain;
    }
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Dog: au au au!" << std::endl;
}
