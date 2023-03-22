/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:21 by malord            #+#    #+#             */
/*   Updated: 2023/03/22 16:13:32 by malord           ###   ########.fr       */
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

void Data::fillInput(std::string inputFile) //TODO check if first char of it->second is a digit
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
            try
            {
                value    = std::stof(line.substr(position + 1, line.length()));
            }
            catch (std::invalid_argument &ia)
            {
                //std::cerr << "got it" << std::endl;
            }
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
    {
        std::cout << "Error: bad input => " << strDate << std::endl;
        return (false);
    }
    return (true);
}

bool Data::validateValue(float value)
{
    if (std::isnan(value))
    {
        std::cout << "Error: bad input, value is not a number" << std::endl;
        return (false);
    }
    if (value < 0)
    {
        std::cout << "Error: Not a positive number" << std::endl;
        return (false);
    }
    if (value > 1000)
    {
        std::cout << "Error: too large a number" << std::endl;
        return (false);
    }
    return (true);
}

void Data::printBTC(void)
{
    std::list<std::pair<std::string, float> >::iterator dbIt = dataBase.begin();
    std::list<std::pair<std::string, float> >::iterator inIt = inputFile.begin();
    std::cout << "TEST = " << inIt->second << std::endl;
    while (inIt != inputFile.end())
    {
        while (dbIt != dataBase.end())
        {
            if (!validateDate(inIt->first) || !validateValue(inIt->second))
                break;
            while (inIt->first.compare(dbIt->first) > 0)
                dbIt++;
            if (inIt->first != dbIt->first)
            {
                if (dbIt != dataBase.begin())
                    dbIt--;
                else
                {
                    std::cout << "Error: date is before the creation of Bitcoin => " << inIt->first << std::endl;
                }
            }
            std::cout << inIt->first << " => " << inIt->second << " = " << inIt->second * dbIt->second << std::endl;
            dbIt = dataBase.begin();
            break;
        }
        inIt++;
    }
}

//TODO check valid date but no value
//TODO non-number as a value
//? How to recuperate an exception thrown by a function and not alter the program