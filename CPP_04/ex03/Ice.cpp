/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:10:25 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:50:03 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :
    AMateria("ice")
{
    // std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const& ice) :
    AMateria("ice")
{
    // std::cout << "Ice copy constructor called" << std::endl;
    *this = ice;
}

Ice::~Ice()
{
    // std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(Ice const& ice)
{
    (void)ice;
    return *this;
}

AMateria*   Ice::clone() const
{
    return new Ice(*this);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
