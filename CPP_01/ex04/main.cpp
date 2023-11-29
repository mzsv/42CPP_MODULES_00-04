/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:44:09 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:38:41 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void    replace(std::string &line, std::string s1, std::string s2)
{
    size_t  pos = 0;

    while(line.find(s1, pos) != std::string::npos) {
        line = line.substr(0, line.find(s1, pos)) + s2 + line.substr(line.find(s1, pos) + s1.length());
        pos = line.find(s2, pos) + s2.length();
    }
}

/* 
** create test file in zsh:
** echo "Hello, this is a test file" > file
** echo "test: this is still a test file for testing tests" >> file
** echo "final test: testtesttesttest" >> file
**
** testing the program:
** 1:
** ./replace file test evaluation && cat file.replace
** 2:
** ./replace file test "." && cat file.replace
** 3:
** ./replace file test "" && cat file.replace
** 4:
** ./replace file test test && cat file.replace
** 5:
** ./replace file test
** 6:
** ./replace 
*/
int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: Enter a filename and two strings next time" << std::endl;
        return 1;
    }

    std::string     filename = argv[1];
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];
    std::ifstream   file;
    std::ofstream   newfile;
    std::string     line;

    file.open(filename.c_str());
    if (!file.is_open())
    {
        std::cout << "Error: File not found" << std::endl;
        return 1;
    }
    newfile.open((filename + ".replace").c_str());
    if (!newfile.is_open())
    {
        std::cout << "Error: Replace file not found" << std::endl;
        return 1;
    }
    while (std::getline(file, line))
    {
        replace(line, s1, s2);
        newfile << line << std::endl;
    }
    file.close();
    newfile.close();
    return 0;
}
