/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:37:31 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:28:27 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombieHeap = newZombie("Heap");

    zombieHeap->announce();
    randomChump("Stack");
    delete zombieHeap;
    return 0;
}
