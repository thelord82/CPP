/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:21 by malord            #+#    #+#             */
/*   Updated: 2023/03/22 13:30:03 by malord           ###   ########.fr       */
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

Data &Data::operator=(const Data &rhs) // TODO Double check the copy of a list
{
    (void)rhs;
    return (*this);
}

Data::~Data(void)
{
    // std::cout << "Default destructor called" << std::endl;
}

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
            this->dataBase.push_back(
                std::make_pair<std::string, float>(static_cast<std::string>(date), static_cast<float>(price)));
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
}

bool Data::validateDate(std::string strDate)
{
    std::tm            date = {};
    std::istringstream ss(strDate);
    ss >> std::get_time(&date, "%Y-%m-%d");
    if (ss.fail())
    {
        std::cout << "Error: bad input => " << strDate << std::endl;
        return (false);
    }
    std::mktime(&date);
    std::ostringstream oos;
    oos << std::put_time(&date, "%F");
    if (oos.str() != strDate)
        std::cout << "Error: bad input => " << strDate << std::endl;
    else
        std::cout << "Date is ok! Look : " << oos.str() << std::endl;
    return (true);
}

std::string Data::validateValue(float value)
{
    if (value < 0)
        return ("Error: Not a positive number");
    if (value > 1000)
        return ("Error: too large a number");
    return ("");
}

void Data::checkInputF(void)
{
    for (std::list<std::pair<std::string, float> >::iterator it = this->inputFile.begin(); it != this->inputFile.end();
         ++it)
    {
        if (!validateDate(it->first))
        {
            std::cerr << "Error: bad input => " << it->first << std::endl;
            continue;
        }
        if (!validateValue(it->second).empty())
            std::cerr << validateValue(it->second) << std::endl;
        else
            std::cout << it->first << " => " << it->second << std::endl;
    }
}

// TODO I need to match the dates of the 2 lists
void Data::printBTC(void)
{
    std::list<std::pair<std::string, float> >::iterator dbIt = dataBase.begin();
    std::list<std::pair<std::string, float> >::iterator inIt = inputFile.begin();

    // THIS returns the matching date and prints the one where there's no match
    // int flag = 0;
    //
    // for (inIt = this->inputFile.begin(); inIt != this->inputFile.end(); ++inIt)
    //{
    //    for (dbIt = this->dataBase.begin(); dbIt != this->dataBase.end(); ++dbIt)
    //    {
    //        if (inIt->first == dbIt->first)
    //        {
    //            std::cout << "MATCH: " << inIt->first << " and " << dbIt->first << std::endl;
    //            dbIt = this->dataBase.begin();
    //            flag = 1;
    //            break;
    //        }
    //    }
    //    if (flag == 0)
    //        std::cout << "NO MATCH FOR " << inIt->first << std::endl;
    //    flag = 0;
    //}

    // for (inIt = inputFile.begin(); inIt != inputFile.end(); ++inIt)
    //{
    //     for (dbIt = dataBase.begin(); dbIt != dataBase.end(); ++dbIt)
    //     {
    //         while (lexicographical_compare(inIt->first.begin(), inIt->first.end(), dbIt->first.begin(),
    //         dbIt->first.end())); if (inIt->first != dbIt->first)
    //         {
    //             dbIt--;
    //             std::cout << "Closest date = " << dbIt->first << std::endl;
    //         }
    //         else
    //             std::cout << "MATCH: " << inIt->first << " and " << dbIt->first << std::endl;
    //     }
    // }
    //  THIS find matching dates

    // TODO Regler si une date est avant la 1re date du CSV
    // TODO Incorporer les affichages au bon endroit pour le controle d'erreurs (mauvaises dates et valeurs)
    while (inIt != inputFile.end())
    {
        while (dbIt != dataBase.end())
        {
            while (!lexicographical_compare(inIt->first.begin(), inIt->first.end(), dbIt->first.begin(),
                                            dbIt->first.end()))
                ++dbIt;
            if (inIt->first != dbIt->first)
            {
                dbIt--;
                std::cout << "Closest date = " << dbIt->first << std::endl;
            }
            else
                std::cout << "MATCH: " << inIt->first << " and " << dbIt->first << std::endl;
            dbIt = dataBase.begin();
            break;
        }
        inIt++;
    }
}