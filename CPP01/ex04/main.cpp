/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:02:30 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:52:33 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: you must input a file name followed by two strings" << std::endl;
        return (1);
    }
    std::string   filename = argv[1];
    std::string   s1       = argv[2];
    std::string   s2       = argv[3];
    std::ifstream ifs(filename);
    if (ifs.fail())
    {
        std::cout << "Error: File does not exist." << std::endl;
        return (2);
    }
    std::string   outputFile = filename.append(".replace");
    std::ofstream ofs(outputFile);
    std::string   line;
    int           position = 0;
    while (std::getline(ifs, line))
    {
        while (line.find(s1) != std::string::npos)
        {
            position = line.find(s1);
            line.erase(position, s1.length());
            line.insert(position, s2);
            position++;
        }
        ofs << line << std::endl;
        line.clear();
    }
    ifs.close();
    ofs.close();
}
