/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:08:55 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:43:01 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(Cat const& cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat&    Cat::operator=(Cat const& cat)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &cat)
    {
        this->_type = cat._type;
    }
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Cat: miau miau miau!" << std::endl;
}
