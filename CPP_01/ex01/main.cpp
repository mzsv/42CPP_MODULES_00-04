/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:48:45 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:28:31 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    const int   N = 3;
    Zombie*     horde = zombieHorde(N, "dude");

    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
