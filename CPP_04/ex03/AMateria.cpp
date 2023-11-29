/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:10:10 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:47:52 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) :
    _type(type)
{
    // std::cout << "AMateria parametrized constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& materia)
{
    // std::cout << "AMateria copy constructor called" << std::endl;
    *this = materia;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria destructor called" << std::endl;
}

AMateria&           AMateria::operator=(AMateria const& materia)
{
    // std::cout << "AMateria assignment operator called" << std::endl;
    this->_type = materia._type;
    return *this;
}

std::string const&  AMateria::getType() const
{
    return this->_type;
}

void                AMateria::use(ICharacter& target)
{
    std::cout << "* override me please *" << target.getName() << " *" << std::endl;
}
