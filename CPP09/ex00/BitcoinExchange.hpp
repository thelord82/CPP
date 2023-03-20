/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:19 by malord            #+#    #+#             */
/*   Updated: 2023/03/20 14:58:22 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <unordered_map>

class Data
{
  private:
    std::map<std::string, float> dataBase; // stores values from csv
    //std::map<std::string, float> inputFile; // stores value from input file
    std::unordered_map<std::string, float> inputFile;

  public:
    Data(void);
    Data(const Data &copy);
    Data &operator=(const Data &rhs);
    virtual ~Data(void);
    bool dateChecker(std::string date); // checks valid date from input file
    void fillDatabase();
    void fillInput(std::string inputFile);
};
#endif