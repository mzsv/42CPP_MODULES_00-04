/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:18:38 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 17:31:13 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) :
    ClapTrap(name)
{
    std::cout << "ScavTrap name constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

int     ScavTrap::getEnergyPoints() const
{
    return (this->_energyPoints);
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead!"
            << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is out of energy!"
            << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead!"
            << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}
