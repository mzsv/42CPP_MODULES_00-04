/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:05:16 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/28 18:42:31 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const& src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain&              Brain::operator=(Brain const& brain)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.getIdea(i);
    }
    return *this;
}

std::string const&  Brain::getIdea(int i) const
{
    return this->ideas[i];
}

void                Brain::setIdea(int i, std::string const& idea)
{
    this->ideas[i] = idea;
}
