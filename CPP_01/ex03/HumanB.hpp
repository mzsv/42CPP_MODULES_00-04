/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:23:56 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:30:15 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
    private:
        std::string _name;
        Weapon*     _weapon;

    public:
        HumanB(std::string name);
        ~HumanB();

        void    attack();
        void    setWeapon(Weapon& weapon);
};

#endif
