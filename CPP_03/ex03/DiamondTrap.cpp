/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:29:47 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 17:32:31 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
    ClapTrap(),
    ScavTrap(),
    FragTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    _hitpoints = FragTrap::getHitpoints();
    _energyPoints = ScavTrap::getEnergyPoints();
    _attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) :
    ClapTrap(name + "_clap_name"),
    ScavTrap(name),
    FragTrap(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->_name = name;
    _hitpoints = FragTrap::getHitpoints();
    _energyPoints = ScavTrap::getEnergyPoints();
    _attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

std::string DiamondTrap::getName() const
{
    return (this->_name);
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "DiamondTrap " << this->_name << " is dead!"
            << std::endl;
        return ;
    }
    std::cout << "DiamondTrap name: " << this->getName() << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}
