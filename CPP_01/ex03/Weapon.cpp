/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:23:19 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:30:38 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :
    _type(type)
{
    std::cout << "Weapon " << this->_type << " pops up" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon " << this->_type << " is history" << std::endl;
}

const std::string&  Weapon::getType()
{
    return (this->_type);
}

void                Weapon::setType(std::string type)
{
    this->_type = type;
}
