/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:21 by malord            #+#    #+#             */
/*   Updated: 2023/03/21 11:07:44 by malord           ###   ########.fr       */
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
        if (line.find(toSplitOn) != std::string::npos)
        {
            position = line.find(toSplitOn);
            date     = line.substr(0, position);
            price    = std::stof(line.substr(position + 1, line.length()));
            this->dataBase.push_back(std::make_pair<std::string, float>(static_cast<std::string>(date), static_cast<float>(price)));
        }
    }
    // THIS prints the content of list coming from the csv data base file
    // int i = 1;
    // for (std::list<std::pair<std::string, float>>::iterator it = this->dataBase.begin(); it != this->dataBase.end();
    //     ++it)
    //{
    //    std::cout << i << " LIST = " << it->first << " et " << it->second << std::endl;
    //    ++i;
    //}
    dataBase.close();
}

void Data::fillInput(std::string inputFile)
{
    std::ifstream ifs(inputFile);
    if (ifs.fail())
        throw std::exception();
    std::string  toSplitOn = "|";
    unsigned int position  = 0;
    std::string  line, date;
    float        value;
    std::getline(ifs, line); // skips first line of file
    while (std::getline(ifs, line))
    {
        date = line.substr(0, 10);
        if (line.find(toSplitOn) != std::string::npos)
        {
            position = line.find(toSplitOn);
            value    = std::stof(line.substr(position + 1, line.length()));
        }
        this->inputFile.push_back(
            std::make_pair<std::string, float>(static_cast<std::string>(date), static_cast<float>(value)));
    }
    // THIS prints the content of the list coming from the input file
    for (std::list<std::pair<std::string, float> >::iterator it = this->inputFile.begin(); it != this->inputFile.end();
         ++it)
    {
        if (!validateDate(it->first))
            std::cout << "Error: bad input => " << it->first << std::endl;
        else if (it->second < 0)
            std::cout << "Error: Not a positive number" << std::endl;
        else if (it->second > 1000)
            std::cout << "Error: too large a number";
        else
            std::cout << it->first << " => " << it->second << std::endl;
    }
}

bool Data::validateDate(std::string strDate)
{
    std::tm            date = {};
    std::istringstream ss(strDate);
    ss >> std::get_time(&date, "%Y-%m-%d");
    if (ss.fail())
        return (false);
    return (true);
}

//TODO Prendre les 2 valeurs de inputFile et dataBase et les multiplier ensemble si pas d'erreurs.