/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:48:15 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 17:15:33 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    protected:
        std::string     _name;
        unsigned int    _hitpoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const& obj);
        ~ClapTrap();
        ClapTrap& operator=(ClapTrap const& obj);

        void        setName(std::string name);
        std::string getName(void) const;
        void        setHitpoints(int hitpoints);
        int         getHitpoints(void) const;
        void        setEnergyPoints(int energyPoints);
        int         getEnergyPoints(void) const;
        void        setAttackDamage(int attackDamage);
        int         getAttackDamage(void) const;

        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};

#endif
