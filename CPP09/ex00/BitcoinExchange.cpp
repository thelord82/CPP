/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:21 by malord            #+#    #+#             */
/*   Updated: 2023/03/17 11:29:24 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Data::Data(void)
{
    //std::cout << "Default constructor called" << std::endl;
}

Data::Data(const Data &copy) : _dbDates(copy._dbDates), _exchangeValue(copy._exchangeValue)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Data &Data::operator=(const Data &rhs) // TODO Double check the copy of a vector
{
    if (this != &rhs)
    {
        this->_dbDates = rhs._dbDates;
        this->_exchangeValue = rhs._exchangeValue;
    }
    return (*this);
}

Data::~Data(void)
{
    //std::cout << "Default destructor called" << std::endl;
}

bool Data::dateChecker(std::string date)
{
    // TODO implement the code in main
}