/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:15:37 by malord            #+#    #+#             */
/*   Updated: 2023/02/27 14:36:29 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP_
#define CONVERSION_HPP_

#include <iomanip>
#include <iostream>
#include <string>
#include <typeinfo>

class Conversion
{
  private:
    std::string _value;

  public:
    Conversion(void);
    Conversion(const Conversion &copy);
    Conversion &operator=(const Conversion &rhs);
    // operator char();
    // operator float();
    // operator int();
    // operator double();
    virtual ~Conversion(void);

    std::string getType(std::string arg);
    void        convertLiteral(std::string arg);
    void        charConversion(std::string arg);
    void        intConversion(std::string arg);
    void        floatConversion(std::string arg);
    void        doubleConversion(std::string arg);
};

#endif