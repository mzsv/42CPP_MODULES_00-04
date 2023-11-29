/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:02:39 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:28:21 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string     stringVAR = "HI THIS IS BRAIN";
    std::string*    stringPTR = &stringVAR;
    std::string&    stringREF = stringVAR;

    std::cout << "&stringVAR: " << &stringVAR << std::endl;
    std::cout << "stringPTR:  " << stringPTR << std::endl;
    std::cout << "&stringREF: " << &stringREF << std::endl;
    std::cout << "stringVAR:  " << stringVAR << std::endl;
    std::cout << "*stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF:  " << stringREF << std::endl;
    return 0;
}
