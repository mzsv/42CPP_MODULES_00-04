/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:32:31 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:24:43 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) :
    _name(name)
{
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is history" << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
