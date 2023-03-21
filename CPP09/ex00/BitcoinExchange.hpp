/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:19 by malord            #+#    #+#             */
/*   Updated: 2023/03/21 10:48:54 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <sstream>

class Data
{
  private:
    std::list<std::pair<std::string, float> > dataBase;
    std::list<std::pair<std::string, float> > inputFile;

  public:
    Data(void);
    Data(const Data &copy);
    Data &operator=(const Data &rhs);
    virtual ~Data(void);
    bool dateChecker(std::string date); // checks valid date from input file
    void fillDatabase();
    void fillInput(std::string inputFile);
    bool validateDate(std::string strDate);
};
#endif