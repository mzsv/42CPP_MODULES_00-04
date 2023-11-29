/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:18:31 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 17:12:46 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap        a("alpha");
    ScavTrap        b("beta");
    FragTrap        c("gamma");
    FragTrap        d;
    unsigned int    amount = 2;

    d = c;
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
    std::cout << "d: " << std::endl
        << "    name: " << d.getName() << std::endl
        << "    health: " << d.getHitpoints() << std::endl
        << "    energy: " << d.getEnergyPoints() << std::endl
        << "    damage: " << d.getAttackDamage() << std::endl;
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
    c.highFivesGuys();
    return 0;
}
