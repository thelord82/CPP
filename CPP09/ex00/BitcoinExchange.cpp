/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:21 by malord            #+#    #+#             */
/*   Updated: 2023/03/24 10:04:26 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Data::Data(void)
{
    // std::cout << "Default constructor called" << std::endl;
}

Data::Data(const Data &copy) : dataBase(copy.dataBase), inputFile(copy.inputFile)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Data &Data::operator=(const Data &rhs)
{
    //std::cout << "=operator called" << std::endl;
    if (this != &rhs)
    {
        this->dataBase = rhs.dataBase;
        this->inputFile = rhs.inputFile;
    }
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
    dataBase.close();
}

void Data::fillInput(std::string inputFile) 
{
    std::ifstream ifs(inputFile);
    bool flag;
    if (ifs.fail())
        throw std::exception();
    std::string  toSplitOn = "|";
    unsigned int position  = 0;
    std::string  line, date;
    float        value;
    std::getline(ifs, line); 
    while (std::getline(ifs, line))
    {
        date = line.substr(0, 10);
        try
        {
            if (line.find(toSplitOn) != std::string::npos)
            {
                position = line.find(toSplitOn);
                if (valueOD(line.substr(position + 1, line.length())))
                {
                    value    = std::stof(line.substr(position + 1, line.length()));
                    flag = true;
                }
                else
                    flag = false;
            }
            if (flag == true)
            {
                this->inputFile.push_back(
                    std::make_pair<std::string, float>(static_cast<std::string>(date), static_cast<float>(value)));
                    flag = false;
            }
            else if (!date.empty())
                this->inputFile.push_back(std::make_pair<std::string, float>(static_cast<std::string>(date), static_cast<float>(0)));
        }
        catch (std::invalid_argument &ia)
        {
            this->inputFile.push_back(std::make_pair<std::string, float>(static_cast<std::string>(date), static_cast<float>(0)));
        }
    }
}

bool Data::validateDate(std::string strDate)
{
    std::tm            date = {};
    std::istringstream ss(strDate);
    
    ss >> std::get_time(&date, "%Y-%m-%d");
    if (ss.fail())
        return (false);
    std::ostringstream oss2;
    oss2 << std::put_time(&date, "%F");
    if (oss2.str() != strDate)
        return (false);
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

    std::time_t now = std::time(0);
    std::tm *now_tm = std::localtime(&now);
    std::ostringstream oss;
    oss << std::put_time(now_tm, "%Y-%m-%d");
    
    while (inIt != inputFile.end())
    {
        while (dbIt != dataBase.end())
        {
            if (inIt->first.compare(oss.str()) > 0)
            {
                std::cout << "Error: bad input => " << inIt->first << " is in the future" << std::endl;
                break;
            }
            if (validateDate(inIt->first) && inIt->second == 0)
            {
                std::cout << "Error: bad input => value is not valid or empty" << std::endl;
                break;
            }
            if (!validateDate(inIt->first))
            {
                std::cout << "Error: bad input => " << inIt->first << std::endl;
                break;
            }
            else if(!validateValue(inIt->second))
                break;
            while (inIt->first.compare(dbIt->first) > 0 && dbIt != dataBase.end())
                dbIt++;
            if (inIt->first != dbIt->first)
            {
                if (dbIt != dataBase.begin())
                    dbIt--;
                else
                {
                    std::cout << "Error: date is before the creation of Bitcoin => " << inIt->first << std::endl;
                    break;
                }
            }
            std::cout << std::fixed << std::setprecision(2) << inIt->first << " => " << inIt->second << " = " << inIt->second * dbIt->second << std::endl;
            dbIt = dataBase.begin();
            break;
        }
        inIt++;
    }
}

bool Data::valueOD(std::string value)
{
    const std::string allowed = "0123456789 -.\n";
    for (unsigned long i = 0; i < value.length(); ++i)
    {
        if (allowed.find(value.at(i)) == std::string::npos)
            return (false);
    }
    return (true);
}