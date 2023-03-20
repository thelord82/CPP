/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:21 by malord            #+#    #+#             */
/*   Updated: 2023/03/20 15:01:09 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Data::Data(void)
{
    // std::cout << "Default constructor called" << std::endl;
}

Data::Data(const Data &copy)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Data &Data::operator=(const Data &rhs) // TODO Double check the copy of a vector
{
    (void)rhs;
    return (*this);
}

Data::~Data(void)
{
    // std::cout << "Default destructor called" << std::endl;
}

// bool Data::dateChecker(std::string date)
//{
//     // TODO implement the code in main
//     // TODO This function needs to check every date of input.txt, but one by one, no return or break or exit
//     // return (true);
// }

void Data::fillDatabase(void)
{
    std::ifstream dataBase("data.csv");
    if (dataBase.fail())
        throw std::exception();
    std::string  toSplitOn = ",";
    unsigned int position  = 0;
    std::string  line, date;
    std::getline(dataBase, line);
    float price;
    while (std::getline(dataBase, line))
    {
        while (line.find(toSplitOn) != std::string::npos)
        {
            position = line.find(toSplitOn);
            date     = line.substr(0, position);
            price    = std::stof(line.substr(position + 1, line.length()));
            this->dataBase.insert(std::pair<std::string, float>(date, price));
            break;
        }
    }
    //THIS prints the content of map
    //int i = 0;
    //for (std::map<std::string, float>::iterator it = this->dataBase.begin(); it != this->dataBase.end(); ++it)
    //{
    //    std::cout << i << " Contenu de map = " << it->first << " et " << it->second << std::endl;
    //    i++;
    //}
    dataBase.close();
}
// ? Why only 4 entries into map instead of 9?
void Data::fillInput(std::string inputFile)
{
    std::ifstream  ifs(inputFile);
    if (ifs.fail())
        throw std::exception();
    std::string  toSplitOn = " | ";
    unsigned int position  = 0;
    std::string  line, date;
    std::getline(ifs, line);
    int value;
    while (std::getline(ifs, line))
    {
        while (line.find(toSplitOn) != std::string::npos)
        {
            position = line.find(toSplitOn);
            date = line.substr(0, position);
            value = std::stof(line.substr(position + 3, line.length()));
            this->inputFile.insert(std::pair<std::string, float>(date, value));
            break;
        }
    }
    for (std::unordered_map<std::string, float>::iterator it = this->inputFile.begin(); it != this->inputFile.end(); ++it)
        std::cout << "Contenu de mapInput = " << it->first << " et " << it->second << std::endl;
}