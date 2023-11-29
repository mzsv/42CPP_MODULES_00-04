/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:48:07 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 17:15:17 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
    _hitpoints(10),
    _energyPoints(10),
    _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
    _name(name),
    _hitpoints(10),
    _energyPoints(10),
    _attackDamage(0)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& obj)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& obj)
{
    std::cout << "ClapTrap assignment operator called" << std::endl;
    this->setName(obj.getName());
    this->setHitpoints(obj.getHitpoints());
    this->setEnergyPoints(obj.getEnergyPoints());
    this->setAttackDamage(obj.getAttackDamage());
    return *this;
}

void        ClapTrap::setName(std::string name)
{
    this->_name = name;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

void        ClapTrap::setHitpoints(int hitpoints)
{
    this->_hitpoints = hitpoints;
}

int         ClapTrap::getHitpoints(void) const
{
    return (this->_hitpoints);
}

void        ClapTrap::setEnergyPoints(int energyPoints)
{
    this->_energyPoints = energyPoints;
}

int         ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}

void        ClapTrap::setAttackDamage(int attackDamage)
{
    this->_attackDamage = attackDamage;
}

int         ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}

void        ClapTrap::attack(const std::string& target)
{
    if (this->_hitpoints <= 0) {
        std::cout << "ClapTrap " << this->_name << " is dead!"
            << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0) {
        std::cout << "ClapTrap " << this->_name << " is out of energy!"
            << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target 
        << ", causing " << this->_attackDamage << " points of damage!"
        << std::endl;
    this->_energyPoints -= 1;
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " is attacked, losing "
        << amount << " points of damage!"
        << std::endl;
    if (this->_hitpoints <= amount)
    {
        this->_hitpoints = 0;
    }
    else
    {
        this->_hitpoints -= amount;
    }
}

void        ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoints <= 0) {
        std::cout << "ClapTrap " << this->_name << " is dead!"
            << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0) {
        std::cout << "ClapTrap " << this->_name << " is out of energy!"
            << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " is repaired, gaining "
        << amount << " health points!"
        << std::endl;
    this->_energyPoints -= 1;
    this->_hitpoints += amount;
}
