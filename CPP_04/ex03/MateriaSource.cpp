/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:28:06 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:51:17 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :
    _materia()
{
    // std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& obj) :
    _materia()
{
    // std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = obj;
}

MateriaSource::~MateriaSource()
{
    // std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] != 0)
        {
            delete _materia[i];
        }
    }
}

MateriaSource&  MateriaSource::operator=(MateriaSource const& obj)
{
    // std::cout << "MateriaSource assignment operator called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (obj.getMateria(i) != 0)
            this->_materia[i] = obj.getMateria(i)->clone();
    }
    return *this;
}

AMateria*       MateriaSource::getMateria(int idx) const
{
    return this->_materia[idx];
}

void            MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] == 0)
        {
            this->_materia[i] = m;
            break ;
        }
    }
}

AMateria*       MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] != 0 && this->_materia[i]->getType() == type)
        {
            return this->_materia[i]->clone();
        }
    }
    return 0;
}
