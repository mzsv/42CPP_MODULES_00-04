/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:05:52 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 17:31:34 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :
    ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) :
    ClapTrap(name)
{
    std::cout << "FragTrap name constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

int     FragTrap::getHitpoints() const
{
    return (this->_hitpoints);
}

int     FragTrap::getAttackDamage() const
{
    return (this->_attackDamage);
}

void    FragTrap::attack(const std::string& target)
{
    if (this->_hitpoints <= 0) {
        std::cout << "FragTrap " << this->_name << " is dead!"
            << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0) {
        std::cout << "FragTrap " << this->_name << " is out of energy!"
            << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void   FragTrap::highFivesGuys()
{
    if (this->_hitpoints <= 0)
    {
        std::cout << "FragTrap " << this->_name << " is dead!"
            << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->getName() << " is paying for high fives. anyone?" << std::endl;
}
