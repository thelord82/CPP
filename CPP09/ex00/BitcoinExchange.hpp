/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:19 by malord            #+#    #+#             */
/*   Updated: 2023/03/17 11:23:14 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>

class Data
{
    private:
        std::vector<std::string> _dbDates; // stores dates from DB
        std::vector<float> _exchangeValue; // stores value from DB
    public:
        Data(void);
        Data(const Data &copy);
        Data &operator=(const Data &rhs);
        virtual ~Data(void);
        bool dateChecker(std::string date); // checks valid date from input file
};
#endif