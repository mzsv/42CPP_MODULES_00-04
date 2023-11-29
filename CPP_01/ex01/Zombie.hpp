/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:32:28 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:27:33 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie(void);
        void    announce(void);
        void    setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
