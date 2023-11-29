/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:23:49 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:30:10 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
    _name(name),
    _weapon(0)
{
    std::cout << "HumanB " << this->_name << " pops up" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << this->_name << " is history" << std::endl;
}

void    HumanB::attack()
{
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " attacks with their bare hands" << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}
