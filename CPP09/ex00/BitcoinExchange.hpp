/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:19 by malord            #+#    #+#             */
/*   Updated: 2023/04/12 10:06:12 by malord           ###   ########.fr       */
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
#include <algorithm>
#include <cmath>
#include <cfloat>

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
    void fillDatabase();
    void fillInput(std::string inputFile);
    bool validateDate(std::string strDate);
    bool validateValue(float value);
    void checkInputF(void);
    void printBTC(void);
    bool valueOD(std::string value);
};
#endif