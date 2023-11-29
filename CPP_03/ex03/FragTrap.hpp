/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:06:00 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 17:18:57 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
     protected:
        unsigned int     _hitpoints;
        unsigned int     _attackDamage;

     public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();

        int     getHitpoints() const;
        int     getAttackDamage() const;
        void    attack(const std::string& target);
        void    highFivesGuys();
};

#endif