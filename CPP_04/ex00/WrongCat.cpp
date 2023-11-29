/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:11:21 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:43:32 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& cat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = cat;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&    WrongCat::operator=(WrongCat const& cat)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &cat)
    {
        this->_type = cat._type;
    }
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat: miau miau miau!" << std::endl;
}
