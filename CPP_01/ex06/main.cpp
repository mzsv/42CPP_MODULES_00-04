/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:27:06 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:43:40 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl        harl;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         level = -1;

    if (argc != 2)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return 1;
    }
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == argv[1])
        {
            level = i;
            break ;
        }
    }
    switch (level)
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
    return 0;
}
