/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:08:55 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:45:55 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const& cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = cat;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
    this->brain = NULL;
}

Cat&    Cat::operator=(Cat const& cat) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &cat)
    {
        this->_type = cat._type;
        *this->brain = *cat.brain;
    }
    return *this;
}

void    Cat::makeSound() const {
    std::cout << "Cat: miau miau miau!" << std::endl;
}
