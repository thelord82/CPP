/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:21 by malord            #+#    #+#             */
/*   Updated: 2023/03/21 15:57:54 by malord           ###   ########.fr       */
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

// TODO cleanup date parsing functions
bool Data::validateDate(std::string strDate)
{
    std::tm            date = {};
    std::istringstream ss(strDate);
    ss >> std::get_time(&date, "%Y-%m-%d");
    if (ss.fail())
        return (false);
    // Check that the date and month are valid
    if (date.tm_mday <= 0 || date.tm_mday > 31 || date.tm_mon < 0 || date.tm_mon > 11)
        return false;

    // Check that the day is not greater than the number of days in the month
    int monthDays = daysInMonth(date.tm_year + 1900, date.tm_mon + 1);
    if (date.tm_mday > monthDays)
        return false;
    return (true);
}

// Helper function to get the number of days in a given month
int Data::daysInMonth(int year, int month)
{
    static const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int ret = days[month-1];

    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        ret = 29; // Leap year
    }

    return ret;
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