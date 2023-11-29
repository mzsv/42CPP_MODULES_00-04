/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:18:45 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 17:29:21 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        unsigned int _energyPoints;

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();

        int     getEnergyPoints() const;
        void    attack(const std::string& target);
        void    guardGate();
};

#endif
