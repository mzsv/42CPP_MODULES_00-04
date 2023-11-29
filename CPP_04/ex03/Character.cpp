/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:12:00 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:49:25 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() :
    _inventory(),
    _trash()
{
    // std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const& name) : _name(name), _inventory(), _trash()
{
    // std::cout << "Character parametrized constructor called" << std::endl;
}

Character::Character(Character const& character) :
    _inventory(),
    _trash()
{
    // std::cout << "Character copy constructor called" << std::endl;
    *this = character;
}

Character::~Character()
{
    // std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != 0)
        {
            delete this->_inventory[i];
        }
        if (this->_trash[i] != 0)
        {
            delete this->_trash[i];
        }
    }
}

Character& Character::operator=(Character const& character)
{
    this->_name = character._name;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != 0)
        {
            delete this->_inventory[i];
        }
        if (character._inventory[i] != 0)
        {
            this->_inventory[i] = character._inventory[i]->clone();
        }
        else
        {
            this->_inventory[i] = 0;
        }
    }
    return *this;
}

std::string const&  Character::getName() const
{
    return this->_name;
}

void                Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == 0)
        {
            this->_inventory[i] = m;
            break ;
        }
    }
}

void                Character::unequip(int idx)
{
    if (!(idx >= 0 && idx < 4) || this->_inventory[idx] == 0)
    {
        return ;
    }
    this->_trash[idx] = this->_inventory[idx];
    this->_inventory[idx] = 0;
}

void                Character::use(int idx, ICharacter& target)
{
    if ((idx >= 0 && idx < 4) && this->_inventory[idx] != 0)
    {
        this->_inventory[idx]->use(target);
    }
}
