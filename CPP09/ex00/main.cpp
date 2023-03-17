/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:17 by malord            #+#    #+#             */
/*   Updated: 2023/03/17 11:14:07 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>

int main(int argc, char **argv)
{
    (void)argc;
    // THIS is the date handling function
    // std::string date_str = "2022-12-33";
    // std::tm     date     = {};
    //
    // std::istringstream ss(date_str);
    // ss >> std::get_time(&date, "%Y-%m-%d");
    //
    // if (ss.fail())
    //{
    //    std::cout << "Error: Invalid date string\n";
    //    return (1);
    //}
    //
    // std::cout << "Date: " << std::put_time(&date, "%Y-%m-%d") << "\n";
    // TODO Transfer the logic into classes
    // TODO 2 vectors, string and floats, both private
    if (argc == 2)
    {
        std::string   inputFile = argv[1];
        std::ifstream ifs(inputFile);
        std::ifstream dataBase("data.csv");
        if (ifs.fail())
        {
            std::cout << "File does not exist" << std::endl;
            return (1);
        }
        std::string              toSplitOn = ",";
        std::vector<std::string> test;
        unsigned int             position = 0;
        std::string              line;
        while (std::getline(dataBase, line))
        {
            while (line.find(toSplitOn) != std::string::npos)
            {
                position = line.find(toSplitOn);
                std::string date = line.substr(0, position);
                test.push_back(date);
                break;
            }
        }
        for (std::vector<std::string>::iterator it = test.begin(); it != test.end(); ++it)
            std::cout << "Contenu du vecteur = " << *it << std::endl;
    }
    else
        std::cout << "Must have 2 arguments" << std::endl;

    return (0);
}