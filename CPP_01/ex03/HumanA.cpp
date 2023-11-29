/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:23:41 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:29:28 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :
    _name(name),
    _weapon(weapon)
{
    std::cout << "HumanA " << this->_name << " pops up" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA " << this->_name << " is history" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
