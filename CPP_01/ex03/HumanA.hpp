/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:23:33 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:29:53 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
    private:
        std::string _name;
        Weapon&     _weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();

        void attack();
};

#endif
