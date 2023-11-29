/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:24:51 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 15:59:27 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void str_capitalize(std::string str) {
	for (int i = 0; str[i]; ++i)
	{
		std::cout << (char)toupper(str[i]);
	}
}

int main(int argc, char **argv)
{
    if (argc == 1)
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	for (int i = 1; argv[i]; i++)
	{
		str_capitalize(argv[i]);
		if (i < argc - 1)
			std::cout << ' ';
	}
    std::cout << std::endl;
	return (0);
}
