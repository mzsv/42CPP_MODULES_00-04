/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:18:31 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 17:19:12 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap     a("alpha");

    std::cout << "a: " << std::endl
        << "    name: " << a.getName() << std::endl
        << "    health: " << a.getHitpoints() << std::endl
        << "    energy: " << a.getEnergyPoints() << std::endl
        << "    damage: " << a.getAttackDamage() << std::endl;
    a.attack("beta");
    a.whoAmI();
    a.guardGate();
    a.highFivesGuys();
    return 0;
}
