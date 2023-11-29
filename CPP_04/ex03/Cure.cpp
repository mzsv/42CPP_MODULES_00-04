/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:10:48 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:49:46 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :
    AMateria("cure")
{
    // std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const& cure) :
    AMateria("cure")
{
    // std::cout << "Cure copy constructor called" << std::endl;
    *this = cure;
}

Cure::~Cure()
{
    // std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(Cure const& cure)
{
    (void)cure;
    return *this;
}

AMateria*   Cure::clone() const
{
    return new Cure(*this);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
