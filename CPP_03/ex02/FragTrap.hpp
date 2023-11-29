/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:06:00 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 17:12:43 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
     public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();

        void    attack(const std::string& target);
        void    highFivesGuys();
};

#endif