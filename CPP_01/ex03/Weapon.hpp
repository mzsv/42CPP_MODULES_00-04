/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:23:26 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:30:42 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string _type;

    public:
        Weapon(std::string type);
        ~Weapon();
        
        const std::string&  getType();
        void                setType(std::string type);
};

#endif
