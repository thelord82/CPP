/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:15:35 by malord            #+#    #+#             */
/*   Updated: 2023/02/27 14:40:34 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void)
{
    std::cout << "Default conversion constructor called" << std::endl;
}

Conversion::Conversion(const Conversion &copy)
{
    this->_value = copy._value;
}

Conversion &Conversion::operator=(const Conversion &rhs)
{
    this->_value = rhs._value;
    return (*this);
}

//Conversion::operator char()
//{
//    return (dynamic_cast<char>(this->_value));
//}
//
//Conversion::operator float()
//{
//    return (dynamic_cast<float>(this->_value));
//}

Conversion::~Conversion(void)
{
    std::cout << "Conversion destructor called" << std::endl;
}

void Conversion::charConversion(std::string arg)
{
    int tmp;
    try
    {
        if (arg.length() == 1 && !std::isdigit(arg[0]))
            tmp = static_cast<int>(arg[0]);
        else
            tmp = static_cast<int>(std::stoi(arg));
        if (isprint(tmp))
        {
            char ch = static_cast<char>(tmp);
            std::cout << "char: " << ch << std::endl;
        }
        else
            throw std::exception();
    }
    catch (const std::exception &e)
    {
        std::cerr << "char: non displayable" << std::endl;
        return;
    }
}

void Conversion::intConversion(std::string arg)
{
    int converted;
    try
    {
        if (arg.length() == 1)
        {
            if (!std::isdigit(arg[0]))
                converted = static_cast<int>(arg[0]);
            else
                converted = static_cast<int>(arg[0] - 48);
        }
        else
            converted = static_cast<int>(std::stoi(arg));
        std::cout << "int: " << converted << std::endl;
    }
    catch (const std::invalid_argument &iv)
    {
        std::cerr << "int: impossible" << std::endl;
    }
    catch (const std::out_of_range &oor)
    {
        std::cerr << "int: impossible" << std::endl;
    }
}

void Conversion::floatConversion(std::string arg)
{
    float converted;
    try
    {
        if (arg.length() == 1)
        {
            if (!std::isdigit(arg[0]))
                converted = static_cast<float>(arg[0]);
            else
                converted = static_cast<float>(arg[0] - 48);
        }
        else
            converted = static_cast<float>(std::stof(arg));
        if (static_cast<int>(converted) == converted)
        {
            std::cout << "float: " << std::fixed << std::setprecision(1) << converted << "f" << std::endl;
        }
        else
            std::cout << "float: " << converted << "f" << std::endl;
    }
    catch (const std::invalid_argument &iv)
    {
        std::cerr << "float: impossible" << std::endl;
    }
    catch (const std::out_of_range &oor)
    {
        std::cerr << "float: impossible" << std::endl;
    }
}

void Conversion::doubleConversion(std::string arg)
{
    double converted;
    try
    {
        if (arg.length() == 1)
        {
            if (!std::isdigit(arg[0]))
                converted = static_cast<double>(arg[0]);
            else
                converted = static_cast<double>(arg[0] - 48);
        }
        else
            converted = static_cast<double>(std::stod(arg));
        if (static_cast<int>(converted) == converted)
        {
            std::cout << "double: " << std::fixed << std::setprecision(1) << converted << std::endl;
        }
        else
            std::cout << "double: " << converted << std::endl;
    }
    catch (const std::invalid_argument &iv)
    {
        std::cerr << "double: impossible" << std::endl;
    }
    catch (const std::out_of_range &oor)
    {
        std::cerr << "double: impossible" << std::endl;
    }
}

std::string Conversion::getType(std::string arg)
{
    try
    {
        if (arg.back() == 'f')
            return ("float");
        if (arg.length() == 1 && !std::isdigit(arg[0]))
            return ("char");
        if (arg.find('.') != std::string::npos && arg.back() != 'f')
            return ("double");
        if (std::stoi(arg) || std::isdigit(arg[0]))
            return ("int");
        throw std::exception();
    }
    catch (std::exception &e)
    {
        return ("string");
    }
}

void Conversion::convertLiteral(std::string arg)
{
    std::string types[4] = {"char", "int", "float", "double"};
    void (Conversion::*conversions[4])(std::string arg) = {
        &Conversion::charConversion,
        &Conversion::intConversion,
        &Conversion::floatConversion,
        &Conversion::doubleConversion
    };

    for (int i = 0; i < 4; ++i)
    {
        if (getType(arg) == types[i])
        {
            (this->*conversions[i])(arg);
            return ;
        }
    }
}