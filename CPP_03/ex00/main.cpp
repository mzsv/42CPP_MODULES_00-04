/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:47:59 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:56:19 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap        a("alpha");
    ClapTrap        b("beta");
    ClapTrap        c("gamma");
    unsigned int    amount = 2;

    std::cout << "a: " << std::endl
        << "    name: " << a.getName() << std::endl
        << "    health: " << a.getHitpoints() << std::endl
        << "    energy: " << a.getEnergyPoints() << std::endl
        << "    damage: " << a.getAttackDamage() << std::endl;
    std::cout << "b: " << std::endl
        << "    name: " << b.getName() << std::endl
        << "    health: " << b.getHitpoints() << std::endl
        << "    energy: " << b.getEnergyPoints() << std::endl
        << "    damage: " << b.getAttackDamage() << std::endl;
    std::cout << "c: " << std::endl
        << "    name: " << c.getName() << std::endl
        << "    health: " << c.getHitpoints() << std::endl
        << "    energy: " << c.getEnergyPoints() << std::endl
        << "    damage: " << c.getAttackDamage() << std::endl;
    a.attack("beta");
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(amount);
    c.attack("alpha");
    a.takeDamage(c.getAttackDamage());
    a.beRepaired(amount);
    std::cout << "a: " << std::endl
        << "    name: " << a.getName() << std::endl
        << "    health: " << a.getHitpoints() << std::endl
        << "    energy: " << a.getEnergyPoints() << std::endl
        << "    damage: " << a.getAttackDamage() << std::endl;
    std::cout << "b: " << std::endl
        << "    name: " << b.getName() << std::endl
        << "    health: " << b.getHitpoints() << std::endl
        << "    energy: " << b.getEnergyPoints() << std::endl
        << "    damage: " << b.getAttackDamage() << std::endl;
    std::cout << "c: " << std::endl
        << "    name: " << c.getName() << std::endl
        << "    health: " << c.getHitpoints() << std::endl
        << "    energy: " << c.getEnergyPoints() << std::endl
        << "    damage: " << c.getAttackDamage() << std::endl;
    return 0;
}
